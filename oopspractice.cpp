#include<iostream>
#include<string.h>
using namespace std;
class Coaching
{
    public:
    char teacher[80];
    int presentstudent;
    char crname[80];
    public:
    Coaching(char teacher[80],int presentstudent,char crname[80])
    {
        this->presentstudent=presentstudent;
        strcpy(this->crname,crname);
        strcpy(this->teacher,teacher);

    }
    Coaching()
    {
    cout<<"Enter Teacher Name :";
    cin.getline(this->teacher,80);
    fflush(stdin);
    cout<<"Enter Number of Students :";
    cin>>this->presentstudent;
    fflush(stdin);
    cout<<"Enter Class Representative Name :";
    cin.getline(this->crname,80);
    fflush(stdin);

    }
    ~Coaching()
    {
        cout<<"\nDestroying "<<presentstudent;
    }
    public:
    print()
    {
        cout<<"Teacher Name -"<<teacher<<" , No.Of Student -"<<presentstudent<<" , CR Name "<<crname;
    }
};
int main()
{
    
    Coaching c2,c1("sdsa",8,"ssssssssd");
    c1.print();
    c2.print();
    
    return 0;
}
