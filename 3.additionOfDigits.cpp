#include<iostream>
using namespace std;
int additionOfDigits(int n)
{
    int digit,sum=0;
    while(n>0)
    {
        digit=n%10;
        sum+=digit;
        n=n/10;
    }
    return sum;
}
int main()
{
    int n;
    cout<<"\nEnter the number: ";
    cin>>n;
    cout<<"\nSum of digits is: "<<additionOfDigits(n)<<"\n";
    return 0;
}