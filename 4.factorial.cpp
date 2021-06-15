#include<iostream>
using namespace std;
int factorial(int n)
{
    int fact=1;
    for(int i=n;i>=1;i--)
    {
        fact=fact*i;
    }
    return fact;
}
int main()
{
    int n;
    cout<<"\nEnter the number: ";
    cin>>n;
    cout<<"\n"<<n<<"!= "<<factorial(n)<<"\n";
    return 0;
}