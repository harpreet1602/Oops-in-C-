#include<iostream>
using namespace std;
void printGcdLcm(int num1,int num2)
{
    int gcd,lcm,on1=num1,on2=num2;    
    while(num1%num2!=0)
    {
        int rem=num1%num2;
        num1=num2;
        num2=rem;
    }
    gcd=num2;
    lcm=(on1*on2)/gcd;
    cout<<"\nGCD of "<<on1<<" and "<<on2<<" is: "<<gcd;
    cout<<"\nLCM of "<<on1<<" and "<<on2<<" is: "<<lcm;
}
int main()
{
    int num1,num2;
    cout<<"Enter the two numbers: ";
    cin>>num1>>num2;
    printGcdLcm(num1,num2);
    return 0;
}