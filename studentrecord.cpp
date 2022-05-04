#include<iostream>
#include<string.h>
using namespace std;
class Person{
private:
    char name[80];
    int cls;
    char adress[80];
public:
Person()
{

}
Person(char name[80],int cls,char adress[80])
{
    strcpy(this->name,name);
    this->cls=cls;
    strcpy(this->adress,adress);
}
friend class Marksheet;


};


class Subject{
private:
    char subname[80];
    int maxmarks;
    int passmarks;
    int obtmarks;

public:
Subject()
{

}
    Subject(char subname[80],int maxmarks,int passmarks,int obtmarks)
    {
        strcpy(this->subname,subname);
        this->maxmarks=maxmarks;
        this->passmarks=passmarks;
        this->obtmarks=obtmarks;
    }

    void print()
    {
        cout<<"Subject - "<<subname<<"   Max Marks -  "<<maxmarks<<"   Passing Marks  - "<<passmarks<<"  Obtained Marks  - "<<obtmarks<<endl;
    }

};

class Marksheet{
private:
    int rollnumber;
    Person student;
    Subject s1,s2,s3;

    Marksheet(int rollnumber,Subject s1,Subject s2,Subject s3)
    {
        this->rollnumber=rollnumber;
        


    }
};


int main()
{
    Person p1("Harsh Vardhan",12,"Varanasi India");
}