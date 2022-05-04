#include <iostream>
#include <string.h>
using namespace std;
//Try private, protected and public inheritance
class Person
{
private:
    char name[80];
    int age;
    char mobile[11];

public:
    Person(char name[80], int age, char mobile[10])
    {
        strcpy(this->name, name);
        this->age = age;
        strcpy(this->mobile, mobile);
    }

public:
    void print()
    {
        cout << "Name - " << name << "  Age - " << age << "   Mobile No.  " << mobile << endl;
    }
};

class Employee : public Person
{
private:
    char post[80];
    int salary;

public:
    Employee(char post[80], int salary, char name[80], int age, char mobile[10])
        : Person(name, age, mobile)
    {
        strcpy(this->post, post);
        this->salary = salary;
    }

public:
    void print()
    {
        Person::print();
        cout << "  Post - " << post << "   Salary-  " << salary << endl;
    }
};

class Manager : public Employee
{
private:
    char post[80];
    char secretary[80];

public:
    Manager(char post[80], int salary, char name[80], int age, char mobile[10], char secretary[80])
        : Employee(post, salary, name, age, mobile)
    {
        strcpy(this->post, post);
        strcpy(this->secretary, secretary);
    }

public:
    void print()
    {
        Employee::print();
        cout << "  Post - " << post << "   Secretary -  " << secretary << endl;
    }
};

int main()
{
    Person p1("Harsh Vardhan", 18, "8115001696");
    Employee e1("officer", 5000, "Harsh Vardhan", 18, "8115001696");
    Manager m1("HOD", 7000, "Abhishek Pathak", 23, "900523456", "rahul");
    p1.print();
    e1.print();
    m1.print();
}
// Make a class Manager add department and secretary