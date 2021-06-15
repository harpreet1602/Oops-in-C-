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
    
    cout<<"\nAbsolute value of 1 is: "<<a.AbsoluteValue(1);
    cout<<"\nAbsolute value of -1 is: "<<a.AbsoluteValue(-1);
    absoluteValue<float> b;
    cout<<"\nAbsolute value of 23.324 is: "<<b.AbsoluteValue(23.324);
    cout<<"\nAbsolute value of -23.324 is: "<<b.AbsoluteValue(-23.324);
    
    absoluteValue<double> c;
    cout<<"\nAbsolute value of 459.324 is: "<<c.AbsoluteValue(459.324);
    cout<<"\nAbsolute value of -459.324 is: "<<c.AbsoluteValue(-459.324);
    return 0;
}
//consider a data structure queue.It can insert and delete data.Using exception handling simulate a queue throw exceptions when queue is full or empty

