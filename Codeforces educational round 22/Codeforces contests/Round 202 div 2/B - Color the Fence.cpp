#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,x;
    int a[10], c[10];
    map <int int> b;

    scanf("%d", &n);

    for(int i=1; i<9=; i++)
    {
        scanf("%d", &x);
        a[i]=x;
        b[x]=0;
        c[i]=x;
    }

    sort(c);

    for(int i=1; i<=9; i++)
    {
        while(n>c[i])
        {
            n-=c[i];
            b[c[i]]++;
        }
    }

    return 0;
}
