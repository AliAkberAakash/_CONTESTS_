#include<bits/stdc++.h>

using namespace std;

int freq(int a[], string s)
{
    int k=0;
    for(int i=0; i<s.length(); i++)
    {
        a[s[i]-97]++;
    }
    for(int i=0; i<27; i++)
    {
        //printf("%d\n", a[i]);
        if(a[i])
            k++;
    }

    return k;
}


int main()
{
    string s;
    int r,m,a[27];


    getline(cin,s);
    scanf("%d", &r);

    if(s.length()==r)
    {
        memset(a,0,sizeof(a));
        m=freq(a,s);
        printf("%d\n", r-m);
    }
    else
    {
        printf("impossible\n");
    }

    return 0;
}
