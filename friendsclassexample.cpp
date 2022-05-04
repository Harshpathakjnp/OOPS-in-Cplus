#include<iostream>
using namespace std;
class A{
    private:
    int age1;

    friend class B;
public:
    A(){
        age1=12;
    }

};

class B{
    private:
    int age2;
public:
    B()
    {
        age2=1;
    }

int add()
{
    A a1;
    return a1.age1 + age2;
}
};

int main()
{
    B b1;
    cout<<"Sum = "<<b1.add();
    return 0;
}