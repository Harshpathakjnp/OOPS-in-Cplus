#include<iostream>
#include<string.h>
using namespace std;
class passenger
{
    char prname[80];
    int age;
    int birthnumber;
    int coachnumber;

    public:
    passenger(char prname[80],int age,int birthnumber,int coachnumber)
    {
        strcpy(this->prname,prname);
        this->age=age;
        this->birthnumber=birthnumber;
        this->coachnumber=coachnumber;

    }
     passenger()
    {
    cout<<"Enter Passenger Name :";
    cin.getline(this->prname,80);
    fflush(stdin);
    cout<<"Enter age of Passenger :";
    cin>>this->age;
    fflush(stdin);
    cout<<"Enter Birth Number of Passenger :";
    cin>>this->birthnumber;
    fflush(stdin);
    cout<<"Enter Coach Number of Passenger :";
    cin>>this->coachnumber;
    fflush(stdin);

    }
    ~passenger()
    {
        cout<<"\nDestroying "<<age;
    }
     public:
    print()
    {
        cout<<"Passenger Name -"<<prname<<" , Age -"<<age<<" , Birth Name "<<birthnumber<<"  Coach Number  - "<<coachnumber;
    }

};
//********************************************
class ticket
{
int trainnumber;
char trainname[80];
passenger p1,p2;
public:
ticket(int trainnumber,char trainname[80])
{
this->trainnumber=trainnumber;
strcpy(this->trainname,trainname);
}

};

//********************************************
int main()
{
    /*passenger p1,p2("Aman",32,18,2);
    p1.print();
    p2.print();
    */
   ticket t(78,"kjll");

}