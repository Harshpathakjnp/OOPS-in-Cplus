#include<iostream>
using namespace std;
int main()
{
    int n=5;
    int i,j,k;

    for(i=n;i>=0;i--)
    {
        for(j=n-1;j>i-2;j--)
        {
            cout<<" ";
        }
        for(k=0;k<=2*i;k++)
        {
            cout<<"0";
        }
        cout<<endl;
    }


    for(i=1;i<=n;i++)
    {
        for(j=n-1;j>i-2;j--)
        {
            cout<<" ";
        }
        for(k=0;k<=2*i;k++)
        {
            cout<<"0";
        }
        cout<<endl;
    }

    
         
}