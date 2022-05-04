#include<iostream>
using namespace std;
class A{
    public:
    void fpublic()
    {
        cout<<"Public"<<endl;
    }

    private:
    void fprivate()
    {
        cout<<"Private"<<endl;
    }

    protected:
    void fprotected()
    {
        cout<<"Protected"<<endl;
    }
};
class B :public A{
public:
void all()
{
    fpublic();
    //fprivate();
    fprotected();
}
};
class C :protected A{
public:
void all()
{
    fpublic();
    //fprivate();
    fprotected();
}
};
class D :private A{
public:
void all()
{
    fpublic();
    //fprivate();
    fprotected();
}
};


int main()
{
    A a1;
    B b1;
    C c1;
    D d1;
    a1.fpublic();
    b1.all();
    c1.all();
    d1.all();
    return 0;
}