#include<iostream>
using namespace std;
int main()
{
    int n=5;
    int i,j,k;
    for(i=0;i<=n;i++)
    {
        for(j=n;j>=i;j--)
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