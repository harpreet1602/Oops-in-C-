#include<iostream>  
using namespace std;
template <class T>
class absoluteValue{
    public:
T AbsoluteValue( T nNumber)
{
  return (nNumber>0)? nNumber:-nNumber;
}
};
int main(){
    absoluteValue<int> a;
    int n1;
    float n2;
    double n3;
    cout<<"\nEnter a integer: ";
    cin>>n1;
    
    cout<<"\nEnter a float type number: ";
    cin>>n2;
   
    cout<<"\nEnter a double type number: ";
    cin>>n3;
    cout<<"\nAbsolute value of "<<n1<<" is: "<<a.AbsoluteValue(n1);
    cout<<"\nAbsolute value of "<<-n1<<" is: "<<a.AbsoluteValue(-n1);
    absoluteValue<float> b;
    
    
    cout<<"\nAbsolute value of "<<n2<<" is: "<<b.AbsoluteValue(n2);
    cout<<"\nAbsolute value of "<<-n2<<" is: "<<b.AbsoluteValue(-n2);
    
    absoluteValue<double> c;
   
    cout<<"\nAbsolute value of "<<n3<<" is: "<<c.AbsoluteValue(n3);
    cout<<"\nAbsolute value of "<<-n3<<" is: "<<c.AbsoluteValue(-n3);
    return 0;
}
//consider a data structure queue.It can insert and delete data.Using exception handling simulate a queue throw exceptions when queue is full or empty
//1
//23.324
//459.324