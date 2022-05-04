#include<iostream>
#include<string.h>
using namespace std;
class Bankaccount
{
    private:
    char name[80];
    int accountno,balance;

    public:
    Bankaccount(char name[80],int accountno,int balance)
    {
        strcpy(this->name,name);
        this->accountno=accountno;
        this->balance=balance;
    }

    public:
    void print()
    {
        cout<<"Name  "<<name<<"\tA/c No.   "<<accountno<<"\tBalance   "<<balance;
    }

    public:
    void withdraw()
    {
        int amount;
        cout<<"Enter Amount to Withdraw :";
        cin>>amount;
        this->balance=this->balance-amount;

    }

    void deposit()
    {
        int amount;
        cout<<"Enter Amount to Withdraw :";
        cin>>amount;
        this->balance=this->balance+amount;

    }
};
int main()
{
    Bankaccount* b1[80];
    int i,account,bal,choice;
    char name[80];
    for(i=0;i<=5;i++)
    {
    cout<<"\n0- Exit\n1- Open Account\n2- Withdraw Money\n3- Deposit the Money\n4- Account Detail\n Enter your Choice :";
    cin>>choice;
    switch(choice)
    {
        case 0:
        return 0;
        case 1:
        cout<<"\nEnter Name :"<<endl;
        fflush(stdin);
        cin.getline(name,80);
        fflush(stdin);
        cout<<"Enter Account Number :"<<endl;
        cin>>account;
        cout<<"Enter opening Balance :";
        cin>>bal;
        b1[i]=new Bankaccount(name,account,bal);
        b1[i]->print();
        break;
        case 2:
        b1[i]->withdraw();
        break;
        case 3:
        b1[i]->deposit();
        break;
        case 4:
        b1[i]->print();
        break;
    }
    }
    
    return 0;
}