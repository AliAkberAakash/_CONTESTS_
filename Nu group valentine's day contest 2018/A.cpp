#include<bits/stdc++.h>

using namespace std;

bool even(string ss, int l)
{
    if(l%2)
        return false;
    else
    {
        string s1,s2;
        s1=ss.substr(0,l/2);
        s2=ss.substr(l/2,l/2);

        if(s1==s2)
            return true;
        else
            return false;

    }
}

int main()
{
    string ss;

    cin>>ss;

    int l=ss.length();

    l--;

    while(!even(ss,l))
    {
        l--;
    }

    printf("%d\n", l);


    return 0;
}
