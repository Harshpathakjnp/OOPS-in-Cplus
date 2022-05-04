#include<iostream>
using namespace std;
int main()
{
    int i,j,k,n=5;
    for(i=1;i<n;i++)
    {
        for(j=i;j<=n;j++)
        {
            cout<<" ";
        }
        for(k=i;k>=1;k--)
        {
            cout<<k;
        }
        for(k=2;k<=i;k++)
        {
            cout<<k;
        }
        cout<<endl;
    }
}