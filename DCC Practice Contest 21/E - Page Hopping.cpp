#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
#define INF 100

using namespace std;

int main()
{
    int a[105][105];

    int m,n,till,sum,x;

    double ans;

    till=100;

    int cas=0;

    while(1)
    {
        cas++;
        memset(a,0,sizeof(a));

        scanf("%d %d", &m, &n);

        if(!m&&!n)
            break;

        a[m][n]=1;

        while(1)
        {
            scanf("%d %d", &m, &n);

            if(!m&&!n)
                break;

            a[m][n]=1;

        }

        for(int i=1; i<=till; i++)
        {
            for(int j=1; j<=till; j++)
            {
                if(!a[i][j] && i!=j)
                    a[i][j]=INF;
            }
        }

        for(int k=1; k<=till; k++)
        {
            for(int i=1; i<=till; i++)
            {
                for(int j=1; j<=till; j++)
                {
                    a[i][j]=min(a[i][j],a[i][k]+a[k][j]);
                }
            }
        }

        sum=x=0;

        for(int i=1; i<=till; i++)
        {
            for(int j=1; j<=till; j++)
            {
                if(a[i][j]<INF)
                {
                    sum+=a[i][j];
                    if(a[i][j])
                    x++;
                }
            }
        }

        ans = ((double)sum)/((double)x);

        printf("Case %d: average length between pages = %.3lf clicks\n", cas,ans);

    }


    return 0;
}
