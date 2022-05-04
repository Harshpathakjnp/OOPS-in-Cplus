#include<iostream>
using namespace std;
class Currency
{
    private:
    
    int total;

    public:
    Currency(int rupees,int paisa)
    {
        
        this->total=paisa + 100*rupees;
        
    }
    public: void print()
    {
        int rs=total/100;
        int ps=total % 100;
        if(rs>0)
        cout<<"Rs "<<rs<<"."<<ps<<endl;
        else
        cout<<"Rs "<<rs<<"."<<-ps<<endl;
    }

    Currency operator + ( Currency const &c2)
{
    Currency result(0,this->total + c2.total);
     return result;
}
 Currency operator - ( Currency const &c2)
{
    Currency result(0,this->total - c2.total);
     return result;
}
int operator > ( Currency const &c2)
{
    
     return this->total>c2.total;
}
int operator < ( Currency const &c2)
{
    
     return this->total<c2.total;
}
int operator == ( Currency const &c2)
{
    
     return this->total==c2.total;
}
friend ostream & operator << (ostream &out, const Currency &c);
    friend istream & operator >> (istream &in,  Currency &c);
};
ostream & operator << (ostream &out, const Currency &c)
{
    if(c.total %100 <9)
    out <<"Currency ( Rs " <<c.total/100<<".0"<<c.total % 100 <<" ) " <<endl;
    else
    out <<"Currency ( Rs " <<c.total/100<<"."<<c.total % 100 <<" ) " <<endl;
    return out;
}


 
istream & operator >> (istream &in,  Currency &c)
{
    int rupee,paisa;
    cout << "Enter Rupees :";
    in >> rupee;
    in >> paisa;
   
    c.total=rupee*100+paisa;
    
    return in;
}
int main()
{
    Currency c1(15,35),c2(2,590),c3(1,2);
    
    c1.print();
    c2.print();
    Currency sum=c1+c2;
    Currency sub=c1-c2;
    sum.print();
    sub.print();
    if(c1>c2)
    c1.print();
    else
    c2.print();
     if(c1<c2)
    c1.print();
    else
    c2.print();
    if(c1==c2)
    c1.print();
    cout<<c2;
    cin  >> c3;
    cout << c3;
       return 0;
}