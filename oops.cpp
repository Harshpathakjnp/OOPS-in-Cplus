// Oops in C Plus Plus.....
/**
 * Class
 * Object
 * Constructor
 * Destructor
 * 
 */
#include<iostream>
#include<string.h>
using namespace std;
class Book
{
    public: char name[80],subject[80];
    int price;
    Book(char name[80],char subject[80],int price)//Constructor
    {
        this->price=price;
        strcpy(this->name,name);
        strcpy(this->subject,subject);

    }
    void print()
    {
        cout<<"Name = "<<name<<endl;
    }
};


int main()
{
    Book b1("Basic C","C",100);
    b1.print();
    cout<<"Hellow RajniGandha PaanMashala";
}