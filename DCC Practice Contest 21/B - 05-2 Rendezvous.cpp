#include<cstdio>
#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
#include<vector>
#include<climits>
#define INF 999999


using namespace std;

int main()
{
    int n,m,x,y,z;
    int a[25][25];

    vector <string> v;

    string s;

    int cas=0;

    while(true)
    {
        cas++;
        memset(a,0,sizeof(a));
        scanf("%d %d", &n, &m);
        if(!m && !n)
            break;

        for(int i=0; i<n; i++)
        {
            cin>>s;
            v.push_back(s);
        }
        for(int i=0; i<m; i++)
        {
            scanf("%d %d %d", &x, &y, &z);
            a[x][y]=z;
            a[y][x]=z;
        }

        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=n; j++)
                if(!a[i][j] && i!=j)
                    a[i][j]=INF;
        }

        for(int k=1; k<=n; k++)
        {
            for(int i=1; i<=n; i++)
            {
                for(int j=1; j<=n; j++)
                {
                    a[i][j]=min(a[i][j],a[i][k]+a[k][j]);
                }
            }
        }

        int sum,fin,p;

        fin=INT_MAX;

        for(int j=1; j<=n; j++)
        {
            sum=0;
            for(int i=1; i<=n; i++)
                {
                    sum+=a[i][j];
                }
            if(sum<fin)
            {
                fin=sum;
                p=j;
            }
        }

        printf("Case #%d : ",cas);
        cout<<v[p-1]<<endl;

        v.clear();

    }

    return 0;
}
