#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>

using namespace std;

int main()
{
    string s,t;
    while(cin>>s)
    {
        cin>>t;
        reverse(s.begin(),s.end());

        if(s==t)
            printf("YES\n");
        else
            printf("NO\n");
    }



    return 0;
}
