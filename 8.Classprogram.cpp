#include<iostream>
using namespace std;
class time
{
    private:
    int hours;
    int minutes;
    public:
    void setdata(int hours,int minutes);
    void getdata();
    void display();
    time add(time t2);
    void add_value(time t1,time t2);
};
void time::setdata(int hours,int minutes)
{
    this->hours=hours;
    this->minutes=minutes;
}
void time::getdata()
{
    cout<<"\nEnter hours and minutes: ";
    cin>>hours>>minutes;
}
time time::add(time t2)
{
    time t3;
    t3.hours=hours+t2.hours;
    t3.minutes=minutes+t2.minutes;
    if(t3.minutes>60)
    t3.hours++,t3.minutes-=60;
    return t3;
}
void time::display()
{
    cout<<"\nHours is "<<hours;
    cout<<"\nMinutes is "<<minutes;
}
void time::add_value(time t1,time t2)
{
    hours=t1.hours+t2.hours;
    minutes=t1.minutes+t2.minutes;
    if(minutes>60)
    hours++,minutes-=60;
}
int main()
{
    time t1,t2,t3,t4;
    t1.setdata(10,20);
    cout<<"\nT1 details:\n";
    t1.display();
    t2.getdata();
    cout<<"\nT2 details:\n";
    t2.display();
    t3=t1.add(t2); //call by reference
    cout<<"\nCall by reference:\n"; 
    t3.display();
    t4.add_value(t1,t2);
    cout<<"\nCall by value:\n";
    t4.display();
    return 0;
}