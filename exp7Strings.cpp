#include <iostream>
#include <string.h>
using namespace std;
class String {
public:

    char str[100];

    String() {}
 
    
    String(char str[])
    {
        strcpy(this->str, str);
    }
 
    String operator+(String& S2)
    {
        String S3;
        strcat(this->str, S2.str);
        strcpy(S3.str, this->str);
        return S3;
    }
    void operator==(String& S2)
    { 
        strcpy(this->str, S2.str);
        cout<<"\nCopied String is: "<<this->str;
    }
     int operator<=(String s3)
    {
        if (strlen(this->str) <= strlen(s3.str))
            return 1;
        else
            return 0;
    }
    void displayLength(){
        int count=0;
        for(int i=0;this->str[i]!='\0';i++)
        {
            count++;
        }
        cout<<"\nLength of the string is: "<<count;
    }
};
 

int main()
{
    char str1[20];
    char str2[20];
    cout<<"\nEnter the two strings: ";
    cin>>str1>>str2;
    String a1(str1);
    String a2(str2);
    String a3;
    a3 = a1 + a2;
    cout << "Concatenation: " << a3.str;
    String a4;
    a4==a1;
    if(a1<=a2)
    cout<<"\nThe first string is lesser than the second string";
    else
    cout<<"\nThe first string is greater than the second string";
    a1.displayLength();
    return 0;
}