#include <iostream>
using namespace std;

class Time;

class TimePrinter {
public:
	void showTime(Time& t);
};

class Time {
private:
	int total;

public:
	Time() { total = 0; }
	friend void TimePrinter::showTime(Time& x); // Friend function
};

void TimePrinter::showTime(Time& x)
{
	
	std::cout << "Time::total = " << x.total;
}

int main()
{
	TimePrinter a;
	Time x;
	a.showTime(x);
	return 0;
}