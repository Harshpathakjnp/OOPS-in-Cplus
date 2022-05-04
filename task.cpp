/*
Make a class Time that takes time in 24 hour format and prints in 12 hour format
14:45 =2:45 PM

Make - operator that gives minutes between 2 times
Make + operator that adds minutes

Make a friend function that allows people to set time directly



*/

#include<iostream>
using namespace std;
class Time;
class TimePrinter {
public:
	void showTime(Time& t);
};

class Time{
    
private:
    int total;

    
public:
    Time(int hour,int minute)
    {
        this->total=minute + hour*60;
    }

    Time operator+ (Time const &t2)
    {
        Time result(0,this->total + t2.total);
        return result;
    }
    Time operator- (Time const &t2)
{
    Time result(0,this->total - t2.total);
    return result;
}

public:
void print()
{
    int hr=this->total/60;
    int min = this->total%60;
    if(hr>12 && hr<25)
    cout<<"Time =>  "<<hr-12<<" : "<<min<<" P.M"<<endl;
    else if(hr>24)
    cout<<"!!! Wrong Input !!!"<<endl;
    else if(hr==12)
    cout<<"Time =>  "<<hr<<" : "<<min<<" A.M"<<endl;
    else
    cout<<"Time =>  "<<hr<<" : "<<min<<" A.M"<<endl;

}
public:
void result()
{
    cout<<"Time => "<<total<<" min"<<endl;
}

friend void TimePrinter::showTime(Time& x);

};

void TimePrinter::showTime(Time& x)
{
	
	std::cout << "Time::total = " << x.total<<endl;

    int hr=x.total/60;
    int min=x.total%60;

    if(hr>12 && hr<25)
    cout<<"Time =>  "<<hr-12<<" : "<<min<<" P.M"<<endl;
    else if(hr>24)
    cout<<"!!! Wrong Input !!!"<<endl;
    else if(hr==12)
    cout<<"Time =>  "<<hr<<" : "<<min<<" A.M"<<endl;
    else
    cout<<"Time =>  "<<hr<<" : "<<min<<" A.M"<<endl;
}



int main()
{
    Time t1(4,45),t2(4,22);
    TimePrinter a;
    t1.print();
    
    t2.print();
    Time add = t1 + t2;
    Time sub= t1 - t2;
   
    add.result();
    sub.result();
    a.showTime(t1);
    
}