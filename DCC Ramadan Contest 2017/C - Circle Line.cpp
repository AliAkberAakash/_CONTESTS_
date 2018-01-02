#include<bits/stdc++.h>
#define inf  999999

using namespace std;

int main()
{
    int n,x,s,t;
    int a[105][105];

    memset(a,0,sizeof(a));

    scanf("%d", &n);

    for(int i=1; i<=n; i++)
    {
        scanf("%d", &x);
        if(i==n)
        {
            a[1][n]=x;
            a[n][1]=x;
        }

        else
        {
            a[i][i+1]=x;
            a[i+1][i]=x;
        }


    }

    puts("");

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
            printf("%02d ", a[i][j]);
        puts("");
    }

    puts("");

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(!a[i][j] && i!=j)
                a[i][j]=inf;
        }
    }

    for(int k=1; k<=n; k++)
    {
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<n; j++)
            {
                a[i][j]=min(a[i][j], a[i][k]+a[k][j]);
            }
        }
    }


    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
            printf("%02d ", a[i][j]);
        puts("");
    }


    puts("");

    scanf("%d %d", &s, &t);

    //printf("%d\n", a[s][t]);

    return 0;
}
