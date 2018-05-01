#include<bits/stdc++.h>
#define INF 1000000001;

using namespace std;

long long adj[100001][100001];

int main()
{
    long long n, a, b, c, k, x, y, p,q,r,i,j;

    scanf("%lld", &n);

    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
            {
                if(i!=j)
                    adj[i][j]=INF;
                else
                    adj[i][j]=0;
            }

    for(i=1; i<n; i++)
    {
        scanf("%lld %lld %lld", &a, &b, &c);
        if(a!=b)
        {
            adj[a][b]=c;
            adj[b][a]=c;
        }
    }

    for(k=0; k<n; k++)
        for(i=0; i<n; i++)
            for(j=0; j<n; j++)
                if(adj[i][j]>adj[i][k]+adj[k][j])
                    adj[i][j]=adj[i][k]+adj[k][j];

    scanf("%lld %lld", &q, &k);

    while(q--)
    {
        scanf("%lld %lld", &x, &y);
        printf("%lld\n",adj[x][k]+adj[k][y]);
    }


    return 0;
}
