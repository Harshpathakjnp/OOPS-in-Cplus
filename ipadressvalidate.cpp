#include<iostream>
#include<string.h>
int isnumber(char ch);
int check(int s);
//int num(string ip,int start,int end);
using namespace std;
int main()
{
    string ip="121.32.431.178";
    int length=ip.size(),count=0,i,p1=-1,p2=-1,p3=-1,s1=0,s2=0,s3=0,s4=0;
    for(i=0;i<=length;i++)
    {
        if(ip[i]=='.')
        {
            count++;
            if(count==1)
            p1=i;
            else if(count==2)
            p2=i;
            else
            p3=i;
        }
    }
    if(count!=3)
    {
        cout<<"The IP Address You Entered is Wrong \n";
        return 0;
    }
    for(i=0;i<p1;i++)
    {
        //cout<<ip[i];
        s1=s1*10+(ip[i]-48);
    }
    cout<<endl;
    for(i=p1+1;i<p2;i++)
    {

        //cout<<ip[i];
        s2=s2*10+(ip[i]-48);
    }
    cout<<endl;
    for(i=p2+1;i<p3;i++)
    {
        //cout<<ip[i];
        s3=s3*10+(ip[i]-48);
    }
     cout<<endl;
    for(i=p3+1;i<length;i++)
    {
        //cout<<ip[i];
        s4=s4*10+(ip[i]-48);
    }
    if(check(s4)==check(s3)==check(s2)==check(s1))
    cout<<"\nsahi hai";
    else
    cout<<"\nGalat IP Adress ";

}






// int num(string ip,int start,int end)
// {
//     int num=0;


// }




int isnumber(char ch)
{
    if((ch>0 && ch<9) || ch=='.')
    return ch;
    else
    return 0;
}


int check(int s)
{
if(s>0 && s<256)
    return 1;
    else 
    return -1;
}