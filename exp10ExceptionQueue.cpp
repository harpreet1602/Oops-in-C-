#include<iostream>
// #include<iomanip>
using namespace std;
class queue
{
private:
int *q;
int max, front, rear, cnt;
public:
class FULL{};  //for exception handling
class EMPTY{}; //for exception handling
queue(int);
void enqueue(int);
int dequeue(void);
void display(void);
};
queue::queue(int m)
{
q=new int[m];
rear=0;
front=0;
cnt=0;
max=m;
}
void queue::enqueue(int item)
{
if(cnt<max)
{
front = front%max;
q[front++]=item;
cnt++;
}
else
throw FULL(); //FULL object is thrown
}
int queue::dequeue(void)
{
if(cnt>0)
{
cnt=cnt-1;
rear = rear %max;
return q[rear++];
}
else
throw EMPTY(); //EMPTY object is thrown
}
void queue::display(void)
{
if(cnt>0)
{
for(int i=0, j=front; i<cnt;i++,j++)
cout<<q[j%max]<<" ";
cout<<endl;
}
else
throw EMPTY();
}
int main()
{
int item, size;
int ch=1;
cout<<"\nEnter the size of the queue: ";
cin>>size;
queue q(size);
cout<<"\nQueue Operations using Exception Handling";
cout<<"\n\nMENU\n1.ENQUEUE\n2.DEQUEUE\n3.SHOW QUEUE\n4.EXIT";
cout<<"\nEnter your choice: ";
cin>>ch;
do
{
switch(ch)
{
case 1:
cout<<"\nEnter the item to insert in to the queue: ";
cin>>item;
try
{
q.enqueue(item);
}
catch(queue::FULL)  //FULL object is caught
{
cout<<"\n***Queue Full***\n";
}
break;
case 2:
try
{
cout<<"\nRemoved Item from the Q is: "<<q.dequeue();
}
catch(queue::EMPTY) //EMPTY object is caught
{
cout<<"\n***Queue Empty***\n";
}
break;
case 3:
cout<<"\nThe Queue is \n";
try
{
q.display();
}
catch(queue::EMPTY)
{
cout<<"\n***Queue Empty***\n";
}
break;
case 4:
exit(0);
}
cout<<"\nEnter your choice: ";
cin>>ch;
}while(ch<5);
return 0;
}