#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    int a[257],l,maxo;

    while(!getline(cin,s).eof())
    {
        maxo=0;
        memset(a,0,sizeof(a));
        l=s.length();
        for(int i=0; i<l; i++)
        {
            int x=(int)s[i];
            a[x]++;
            if(a[x]>maxo)
            {
                if((x>=65&&x<=90) ||(x>=97&&x<=x<=122))
                    maxo=a[x];
            }
        }



        for(int i=65; i<91; i++)
        {
            if(a[i]==maxo)
                printf("%c",i);
        }
        for(int i=97; i<123; i++)
        {
            if(a[i]==maxo)
                printf("%c",i);
        }
        printf(" %d\n", maxo);

    }

    return 0;
}
