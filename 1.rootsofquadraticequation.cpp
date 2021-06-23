#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float a,b,c,discriminant,realpart,imaginarypart,x1,x2;
    cout<<"\nEnter the coefficients of the quadratic equation: ";
    cin>>a>>b>>c;
    discriminant=(b*b)-(4*a*c);
    if(a==0)
    {
        cout<<"\nInvalid inputs\n";
    }
    else if(discriminant>0)
    {
        x1=(-b+sqrt(discriminant))/(2*a);
        x2=(-b-sqrt(discriminant))/(2*a);
        cout<<"\nThe roots are real and distinct: ";
        cout<<"\nx1= "<<x1<<"\nx2= "<<x2;
    }
    else if(discriminant==0)
    {
        x1=-b/(2*a);
        cout<<"\nThe roots are real and equal:";
        cout<<"\n x1=x2= "<<x1;
    }
    else
    {
    realpart=-b/(2*a);
    imaginarypart=sqrt(-discriminant)/(2*a);
    cout<<"\nThe roots are imaginary and distinct:"; 
    cout<<"\nx1= "<<realpart<<" + "<<imaginarypart<<"i";
    cout<<"\nx2= "<<realpart<<" - "<<imaginarypart<<"i";
    }
    cout<<"\n";
    return 0;
}