#include<iostream>
using namespace std;

class Complex
{
	private:
		float real;
		float imag;
	public:
		Complex(){
			real = 0;
			imag = 0;
		}
		Complex(float r, float i){
			real = r;
			imag = i;
		}
		Complex add(Complex c){
			return Complex(real + c.real, imag + c.imag);
		} 
		
		void display(){
			cout<<"\n"<<real<<" + "<<imag<<"i"<<endl;
		}
};

int main(){
    float r1,i1,r2,i2;
    cout<<"\nEnter the real part of first complex number: ";
    cin>>r1;
    cout<<"\nEnter the imaginary part of first complex number: ";
    cin>>i1;
    
    cout<<"\nEnter the real part of second complex number: ";
    cin>>r2;
    cout<<"\nEnter the imaginary part of second complex number: ";
    cin>>i2;
    
	Complex c1(r1, i1), c2(r2, i2), c3;
	c3 = c1.add(c2);
	c1.display();
	c2.display();
	cout<<"\nThe sum is : "<<endl;
	c3.display();
	return 0;
}