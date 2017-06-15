#include<cstdio>
#include<cstring>
#include<iostream>
#include<vector>
#include<queue>

using namespace std;

bool visited[105];

int main()
{
    int m,n,x,y,z,k;
    int inDegree[10001];
    vector <int> v[105];
    queue <int> q;

    while(1)
    {
        scanf("%d %d", &n, &m);

        memset(inDegree,0,sizeof(inDegree));
        memset(visited,0,sizeof(visited));

        if((!m)&&(!n))  break;

        for(int i=0; i<m; i++)
        {
            scanf("%d %d", &x, &y);
                v[x].push_back(y);
                inDegree[y]++;
        }

        for(int i=1; i<=n; i++)
        {
            if(!inDegree[i])
                {
                    if(!visited[i])
                    {
                        q.push(i);
                        visited[i]=1;
                    }
                }
        }

        int o=0;

        while(!q.empty())
        {
            z=q.front();
            q.pop();
            if(o)
                printf(" ");
            printf("%d", z);

            for(int i=0; i<v[z].size(); i++)
            {
                k=v[z][i];
                inDegree[k]--;
                if(!inDegree[k]&&!visited[k])
                    {
                        q.push(k);
                        visited[k]=1;
                    }
            }
            o++;
        }

        puts("");

        for(int i=0; i<105; i++)
        v[i].clear();

        while(!q.empty())
            q.pop();

    }

    return 0;
}
