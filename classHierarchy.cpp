#include<iostream>
using namespace std;
class Student{
    int rollno;
    public:
    int getrollno()
    {
        cout<<"\nEnter roll no: ";
        cin>>rollno;
        return rollno;
    }
};
class Test:public Student{
   int marks;
   int getmarks(){
     cout<<"\nEnter marks: ";
        cin>>marks;
        return marks;   
   }
};
class Sports{
    string game;
    string getsports(){
     cout<<"\nEnter game: ";
        cin>>game;
        return game;
    }
};
class Result:public Test,public Sports{
    void display();
};
int main()
{
    Result r;
    return 0;
}