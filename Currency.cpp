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
    Currency result(0,this->total - c2.total);
     return result;
}

};

int main()
{
    while(1)
    {
    Currency* c1 ;
    int rs;
    float paisa;
    cout<<"Enter Money in Rupee :" ;
    cin>>rs;
    cout<<"Enter money in Paisa :";
    cin>>paisa;
    c1=new Currency(rs,paisa);
    c1->print();
    Currency sum=(*c1) ;
    //sum.print();
    cout<<"Enter Money in Rupee :" ;
    cin>>rs;
    cout<<"Enter money in Paisa :";
    cin>>paisa;
    c1=new Currency(rs,paisa);
    sum=sum+(*c1);
    sum.print();
    }
    return 0;
}