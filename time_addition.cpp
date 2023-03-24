// write a c++ program that takes two values of time (hr,min,sec) and outputs their sum using constructors and operator overloading
#include<iostream>
using namespace std;
class time
{
    public:
    int hr;
    int min;
    int sec;
    time()
    {
        hr=0;
        min=0;
        sec=0;
    }
    time(int a,int b,int c)
    {
        hr=a;
        min=b;
        sec=c;
    }
    time operator +(time t)
    {
        time temp;
        temp.hr=hr+t.hr;
        temp.min=min+t.min;
        temp.sec=sec+t.sec;
        return temp;
    }
};
int main()
{
    time t1(15,56,20);
    time t2(21,5,55);
    time t3;
    t3=t1+t2;
    if(t3.sec>60)
    {
        t3.sec-=60;
        t3.min+=1;
    }
    if(t3.min>60)
    {
        t3.min-=60;
        t3.hr+=1;
    }
    cout<<"addition of time is"<<endl<<t3.hr<<":"<<t3.min<<":"<<t3.sec;

}