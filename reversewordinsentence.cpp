#include <iostream>
#include <string.h>
using namespace std;
int isLetter(char ch);
int main()
{
    string str = "This is a train";
    string word = "", rev = "";
    str = " " + str + " x";
    int n = str.length();
    for (int i = 0; i <= n - 1; i++)
    {
        if (!isLetter(str[i - 1]) && isLetter(str[i]))
        {
            //cout<<word<<endl;;
            rev = word + " " + rev;
            word = "";
        }
        word = word + str[i];
    }
    cout << rev << endl;
    return 0;
}
int isLetter(char ch)
{
    if (ch >= 'a' && ch <= 'z')
        return 1;
    if (ch >= 'A' && ch <= 'Z')
        return 1;
    return 0;
}