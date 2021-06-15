#include<iostream>
using namespace std;
class STACK
{
    private:
    int *arr;
    int top;
    int size;
    public:
    STACK(int n)
    {
        size=n;
        arr=new int[size];
        top=-1;
    }
    void push(int data);
    int pop();
    void display();
};
void STACK::push(int data)
{
    if(top>=size){
        cout<<"\nStack overflow\n";
        return;
    }
    top++;
    arr[top]=data;
}
int STACK::pop()
{
    if(top==-1)
    {
        cout<<"\nStack underflow\n";
        return -1;
    }
    int data=arr[top];
    top--;
    return data;
}
void STACK::display()
{
    if(top==-1)
    cout<<"\nEmpty stack\n";
    for(int i=top;i>=0;i--)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}
int main()
{
    STACK s(5);
    s.display();
    s.push(10);
    s.push(20);
    s.push(30);
    s.display();
    cout<<"\nPopped element is "<<s.pop()<<"\n";
    cout<<"\nPopped element is "<<s.pop()<<"\n";
    cout<<"\nPopped element is "<<s.pop()<<"\n";
    cout<<"\nPopped element is "<<s.pop()<<"\n";
    s.display();
    return 0;
}
