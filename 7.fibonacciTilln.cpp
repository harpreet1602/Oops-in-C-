#include<iostream>
using namespace std;
void printFibonacci(int n)
{
    int a=0,b=1,c;
    for(int i=0;i<n;i++)
    {
        cout<<a<<" ";
        c=a+b;
        a=b;
        b=c;
    }
    cout<<"\n";
}
int main()
{
    int n;
    cout<<"\nEnter the number: ";
    cin>>n;
    printFibonacci(n);
    return 0;
}