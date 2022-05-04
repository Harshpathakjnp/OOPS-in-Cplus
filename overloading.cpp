#include<iostream>
using namespace std;
class Currency{
private:
    int rupee;
    int paisa;
    int total;
public:
    Currency(int rupee,int paisa)
    {
        this->rupee=rupee;
        this->paisa=paisa;
        this->total=paisa + rupee*100;
    }
public:
void print()
{
    int rs = total/100;
    int ps = total%100;
    if(rs>0)
        cout<<"Rs "<<rs<<"."<<ps<<endl;
        else
        cout<<"Rs "<<rs<<"."<<-ps<<endl;
}

Currency operator+ (Currency const &c2)
{
    Currency result(0,this->total + c2.total);
    return result;
}

Currency operator- (Currency const &c2)
{
    Currency result(0,this->total - c2.total);
    return result;
}

int operator < ( Currency const &c2)
{
     return this->total<c2.total;
}
int operator > (Currency const &c2)
{
    return this->total>c2.total;
}
int operator == (Currency const &c2)
{
    return this->total==c2.total;
}


};

int main()
{
    Currency c1(15,35),c2(26,92);
    Currency sum=c1 + c2;
    Currency sub=c1 - c2;
    c1.print();
    c2.print();
    sum.print();
    sub.print();
    if(c1<c2)
    c1.print();
    else
    c2.print();
    if(c1>c2)
    c1.print();
    else
    c2.print();
    if(c1==c2)
    c1.print();
    
}