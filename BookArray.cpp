#include<iostream>
#include<string.h>
using namespace std;
    class Book
    {
        private:
        char name[80],subject[80];
        int price;
        public: Book(char name[80],char subject[80],int price)
        {
            strcpy(this->name,name);
            strcpy(this->subject,subject);
            this->price=price;
        }
        public: void print()
        {
            cout<<"Name = "<<name<<", Subject="<<subject<<", Price = "<<price<<endl;
        }
    };
    int main()
    {
        Book* b1[80];
        int i,price;
        char name[80],sub[80];
        for(i=1;i<=5;i++)
        {
        cin>>name>>sub>>price;
        b1[i]=new Book(name,sub,price);
        b1[i]->print();
        }
       
        return 0;
    }