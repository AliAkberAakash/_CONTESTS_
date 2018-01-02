#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s,t;
    stack<char> k;

    getline(cin,s);

    for(int i=0; i<s.length(); i++)
    {
        if(k.empty())   k.push(s[i]);
        else
        {
            if(s[i]==k.top())
                k.pop();
            else
                k.push(s[i]);
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
