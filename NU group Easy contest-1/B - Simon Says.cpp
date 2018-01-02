#include<bits/stdc++.h>

using namespace std;

bool says(string s)
{
    bool x=true;
    string t="Simon says";
    for(int i=0; i<10&&x; i++)
    {
        if(s[i]!=t[i])
            x=false;
    }
    return x;
}

int main()
{
    int n;
    string s;

    scanf("%d", &n);
    getchar();

    for(int i=0; i<n; i++)
    {
        getline(cin,s);
        if(says(s))
        {
            for(int j=11; j<s.length(); j++)
                printf("%c", s[j]);
            puts("");
        }

    }

    return 0;
}
