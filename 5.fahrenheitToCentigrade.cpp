#include<iostream>
using namespace std;
float fahrenheitToCentigrade(float f)
{
    float c;
    c=((5*(f-32))/9);
    return c;
}
int main()
{
    float fahrenheit;
    cout<<"\nEnter the temperature in fahrenheit: ";
    cin>>fahrenheit;
    cout<<"\nThe temperature in centigrade is: "<<fahrenheitToCentigrade(fahrenheit)<<"\n";
    return 0;
}