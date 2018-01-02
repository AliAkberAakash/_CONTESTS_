#include<bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    stack <char> stk;

    while(!getline(cin,str).eof())

    {
        int l=str.length();

    for(int i=0; i<l; i++)
    {
        if(str[i]==' ')
        {
            while(!stk.empty())
            {
                printf("%c",stk.top());
                stk.pop();
            }
            printf(" ");
        }
        else
        {
            stk.push(str[i]);
        }
    }

    while(!stk.empty())
            {
                printf("%c", stk.top());
                stk.pop();
            }
    puts("");
    }

    return 0;
}
