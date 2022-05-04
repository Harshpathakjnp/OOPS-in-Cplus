#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char string1[26]="crr", string2[20]="crd";
    int lenth1, lenth2, i, j, found=0, notfound=0;
    cout<<"Enter the First String: ";
    //cin>>string1;
    cout<<"Enter the Second String: ";
    //cin>>string2;
    lenth1 = strlen(string1);
    lenth2 = strlen(string2);
    if(lenth1 != lenth2)
    {
        cout<<"\nThey are not anagrams  ";
          return 0;
    }
    int f[26]={0};
    for(int i=0;i<=lenth1-1;i++)
    {
        char ch=string1[i];
        int pos=ch-'a';
        f[pos]++;
    }
       for(int i=0;i<=lenth2-1;i++)
    {
        char ch=string2[i];
        int pos=ch-'a';
        f[pos]--;
    }
    for(int i=0;i<=25;i++)
    if(f[i]!=0)
    {
    cout<<"Not"<<endl;
    return 0;
    }

        cout<<"Yes"<<endl;
    return 0;
}