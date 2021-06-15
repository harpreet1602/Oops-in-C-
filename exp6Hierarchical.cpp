#include <iostream>
using namespace std;
class BookTitle
{
    string title;
public:
    void gettitle()
    {
        cout << "\nEnter title of the book: ";
        getline(cin,title);
    }
    void show()
    {
        cout<<"The name of the book is: "<<title<<"\n";
    }
};
class Book1 : public BookTitle
{
    int price;
    string author;
    public:
    void getdata()
    {
        cout << "\nEnter price of book1: ";
        cin >> price;
        cin.ignore();
        cout <<"\nEnter the author of the book1: ";
        getline(cin,author);
    }
     void display()
    {
        cout<<"The price of the book1 is: "<<price<<"\n";
        cout<<"The author of the book1 is: "<<author<<"\n";
    }
};

class Book2 : public BookTitle
{
    int price;
    string author;
    public:
    void getdata()
    {
        cout << "\nEnter price of book2: ";
        cin >> price;
        cin.ignore();
        
        cout <<"\nEnter the author of the book2: ";
        getline(cin,author);
    }
     void display()
    {
        cout<<"The price of the book2 is: "<<price<<"\n";
        cout<<"The author of the book2 is: "<<author<<"\n";
    }
};
int main()
{
    Book1 b1;
    Book2 b2;
    b1.gettitle();
    b1.getdata();

    b2.gettitle();
    b2.getdata();   
    cout<<"\n\nDetails:-\n";
    b1.show();
    b1.display();
    cout<<"\n";
    b2.show();
    b2.display();
    return 0;
}