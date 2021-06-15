#include<iostream>
using namespace std;
int power(int n)
{
    int count=1;
    while(n>0)
    {
        n=n/10;
        count=count*10;
    }
    return count/10;
}
int reverseNumber(int n)
{
    int digit,rev=0;
    int pow=power(n);
    while(n>0)
    {
        digit=n%10;
        rev+=(digit*pow);
        pow=pow/10;
        n=n/10;
    }
    return rev;
}
int main()
{
    int n;
    cout<<"\nEnter the number: ";
    cin>>n;
    cout<<"\nReverse of the number is: "<<reverseNumber(n)<<"\n";
    return 0;
}
