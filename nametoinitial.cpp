#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char s[80];
    int l,i,a;
    cout<<"enter Name : ";
    gets(s);
    l=strlen(s);
    cout<<s[0]<<"";
    for(i=0;i<l;i++)
    {
        if(s[i]!=32)
        a=(-1);
    }
    for(i=0;i<l;i++)
    {
        if(s[i]==32)
        {
            a=i;
        }
    }
    for(i=0;i<l;i++)
    {
        if(s[i]==32)
        {
            cout<<". "<<s[i+1];
        }
        
    }
    
    for(i=a+2;i<=l;i++)
    cout<<s[i];
    





    return 0;
}