#include<cstdio>
#include<string>
#include<cstring>
#include<iostream>

using namespace std;

string s="qwertyuiopasdfghjkl;zxcvbnm,./";

void printRight(char c)
{
    for(int i=0; i<s.length()-1; i++)
        if(s[i+1]==c)
            printf("%c", s[i]);
}

void printLeft(char c)
{
    for(int i=1; i<s.length(); i++)
        if(s[i-1]==c)
            printf("%c", s[i]);
}


int main()
{

    char x;
    string str;

    cin>>x;
    getchar();

    getline(cin,str);

    if(x=='R')
    {
        for(int i=0; i<str.length(); i++)
            printRight(str[i]);
    }
    else
    {
        for(int i=0; i<str.length(); i++)
            printLeft(str[i]);
    }

    printf("\n");

    return 0;
}
