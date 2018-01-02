#include<bits/stdc++.h>

using namespace std;

bool pall(string s)
{
    string t=s;
    std::reverse(t.begin(),t.end());
    if(s==t)
        return true;
    return false;
}

int main()
{
    string s,t;
    int k,l,m,n,c;

    getline(cin,s);
    scanf("%d", &k);
    l=s.length();
    m=l/k;
    n=c=0;

    if((m*k) !=l)
    {
        printf("NO\n");
    }
    else
    {
        while(n<l)
    {
        for(int i=n; i<m+n;  i++)
        {
            t.push_back(s[i]);
        }
        n=n+m;
        if(pall(t))
            c++;
        t.clear();
    }
    if(c==k)
        printf("YES\n");
    else
        printf("NO\n");
    }

    return 0;
}
