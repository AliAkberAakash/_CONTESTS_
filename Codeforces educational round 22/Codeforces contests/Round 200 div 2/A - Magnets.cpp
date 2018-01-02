#include<cstdio>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,c;
    string x,d;

    scanf("%d", &n);

    c=0;

    getchar();

    cin>>x;
    d=x;

    for(int i=1; i<=n-1; i++)
    {
        cin>>x;
        if(d[1]==x[0])
            c++;
        d=x;
    }

    printf("%d\n", c+1);

    return 0;
}
