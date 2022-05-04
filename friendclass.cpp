#include<iostream>
using namespace std;
class A{
    private:
    int num1;

    friend class ClassB;
public:
    A(){
        num1=12;
    }

};

class ClassB{
    private:
    int num2;
public:
    ClassB()
    {
        num2=1;
    }

int add()
{
    A a1;
    return a1.num1 + num2;
}
};

int main()
{
    ClassB b1;
    cout<<"Sum = "<<b1.add();
    return 0;
}