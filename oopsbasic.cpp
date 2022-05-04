#include<iostream>
#include<string.h>
using namespace std;
class Book
{
    char author[80];
    int price;
    char name[80];
    public:
    Book(char author[80],int price,char name[80])
    {
        this->price=price;
        strcpy(this->name,name);
        strcpy(this->author,author);
    }

    public: print()
    {
        cout<<"Name "<<this->name<<", Price "<<this->price<<",Author "<<this->author<<endl;
    }
    ~Book()
    {
        cout<<"Destroying "<< name;
    }
};

int main()
{
Book b1("Shubham",1000,"CR Structure");
Book b2("Harsh",1200,"C language");
b1.print();
b2.print();
return 0;
}
