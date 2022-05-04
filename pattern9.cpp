#include<iostream>
using namespace std;
int main()
{
    int n=5,j,i,k;
    for(i=0;i<=n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<"0";
        }
        for(j=n-1;j>=i;j--)
        {
            cout<<" ";
        }
        for(j=n-1;j>=i;j--)
        {
            cout<<" ";
        }
        for(k=0;k<=i;k++)
        {
            cout<<"0";
        }
        cout<<endl;
    }

    for(i=n-1;i>=0;i--)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<"0";
        }
        for(j=n-1;j>=i;j--)
        {
            cout<<" ";
        }
        for(j=n-1;j>=i;j--)
        {
            cout<<" ";
        }
        for(k=0;k<=i;k++)
        {
            cout<<"0";
        }
        cout<<endl;
    }
}