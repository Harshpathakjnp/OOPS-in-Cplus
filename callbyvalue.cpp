/*                                  CALL BY VALUE AND CALL BY REFERENCE                         */

#include<iostream>
using namespace std;
void callbyValue(int x,int y);
void callbyReference(int& x,int& y);
void callbyPtr(int* x,int* y);

int main()
{
int x=4;int y=5;
cout<<"Main "<<x<<","<<y<<endl;
callbyValue(x,y);
cout<<"Main "<<x<<","<<y<<endl;
callbyReference(x,y);
cout<<"Main "<<x<<","<<y<<endl;

callbyPtr(&x,&y);
cout<<"Main "<<x<<","<<y<<endl;
}

void callbyPtr(int* x,int* y)
{
    cout<<"Ptr "<<*x<<","<<*y<<endl;
int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    cout<<"Ptr "<<*x<<","<<*y<<endl;

}
/* ***************************************************************************************************************** */

void callbyValue(int x,int y)
{
    cout<<"Value "<<x<<","<<y<<endl;
int temp;
    temp=x;
    x=y;
    y=temp;
    cout<<"Value "<<x<<","<<y<<endl;

}

/* ***************************************************************************************************************** */

void callbyReference(int& x,int& y)
{

//cout<<"Ref "<<x<<","<<y<<endl;
int temp;
    temp=x;
    x=y;
    y=temp;
    cout<<"Ref-- "<<x<<","<<y<<endl;

}