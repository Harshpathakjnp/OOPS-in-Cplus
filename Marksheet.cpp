#include<iostream>
#include<string.h>
using namespace std;
class Marksheet
{
    private :
char name[80];
int rollno,phy,chem,maths,percent;

public: Marksheet(char name[80],int rollno)
{
    strcpy(this->name,name);
    this->rollno=rollno;
}
};

int main()
{
    Marksheet m1("Harsh",133);
}
