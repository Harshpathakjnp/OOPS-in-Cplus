#include <iostream>
#include <string.h>
using namespace std;
class BankAccount
{
private:
    char accountno[18];
    char custname[80];
    float balance;

public:
    BankAccount(char accountno[16], char custname[80], float balance)
    {
        strcpy(this->accountno, accountno);
        strcpy(this->custname, custname);
        this->balance = balance;
    }

public:
    void openAccount()
    {
        cout << "Enter Account Holder Name to Open Bank Account :";
        cin.getline(custname, 80);
        cout << "Enter Account Number You want to provide :";
        cin.getline(accountno, 18);
        cout << "Enter Account Opening Balance :";
        cin >> this->balance;
    }

public:
    void Deposit()
    {
        int money;
        cout << "\nEnter Amount to Deposit in Your Account : ";
        cin >> money;
        if(money<0)
        cout<<"\nYou can't Deposit Amount :"<<endl;
        this->balance = this->balance + money;
    }

public:
    void Withdraw()
    {
        int money;
        cout << "Enter Amount to Withdraw from Your Account : ";
        cin >> money;
        if(money>this->balance)
        cout<<"Low Balance !!! you can't Withdraw"<< endl;
        else if(money<1)
        cout<<"\nWrong Input !! You can't withdraw negative amount :";
        else
        this->balance = this->balance - money;
    }

public:
    void print()
    {
        cout << "Account No  => " << accountno << "   Cust Name   => " << custname << "   Balance   => " << balance << endl;
    }
};

int main()
{
    int choice = 1;
    BankAccount b1("", "xyz", 0);
    b1.openAccount();
    while(choice!=0)
    {
    
    
    cout << "\n1- Exit\n2- Withdraw Money\n3- Deposit the Money\n4- Account Detail\n Enter your Choice :";
    cin >> choice;
    switch (choice)
    {
    case 1:
        return 0;
    case 2:
        b1.Withdraw();
        break;
    case 3:
        b1.Deposit();
        break;
    case 4:
        b1.print();
        break;
    default:
        cout << "Wrong Choice Selected :!";
    }
    }
    return 0;
}