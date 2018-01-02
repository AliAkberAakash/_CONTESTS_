#include<bits/stdc++.h>

using namespace std;


int main()
{
    string s,t;
    stack<char> k;

    getline(cin,s);

    for(int i=0; i<s.length();)
    {

        if(k.empty()&&s[i]!=' '&&s[i]!='.'&&s[i]!=',')
        {
            k.push(s[i]);
            i++;
            continue;
        }
        if(s[i]!=' ')
        {
            if(s[i]=='.')
            {
                if(!k.empty())
                {
                    if(k.top()!=' ')
                    {
                        k.push(' ');
                    }
                }
                k.push('.');
                k.push('.');
                k.push('.');
                i+=3;

            }
            else if(s[i]==',')
            {
                k.push(',');
                if(i!=s.length()-1)
                k.push(' ');
                i++;
            }
            else
            {
                k.push(s[i]);
                i++;
            }
        }
        else
        {
            if(!k.empty())
            {
                if(k.top()!=' ' && k.top()!='.' && s[i+1]!=' ' && s[i+1]!='.' &&s[i+1]!=',')
                    k.push(' ');
            }
            i++;
        }

    }

    while(!k.empty())
    {
        t.push_back(k.top());
        k.pop();
    }

    for(int i=t.length()-1; i>=0; i--)
        printf("%c", t[i]);

    return 0;
}
