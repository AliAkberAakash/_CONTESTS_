/*
* Solved by: Ali AKber Aakash
* Email: cedward318@gmail.com or ali852609@gmail.com
*/

#include <cstdio>
#include <iostream>
#include<cstring>
#include <vector>
#include <queue>

using namespace std;

class edgeNode
{
    public:
    int e;
    int no;
    edgeNode() { e=no=0; }
};

int main()
{
    int t,n,m,u,v;

    queue <int> q;
    bool visited[10005];
    vector <int> vc[10005];
    vector <edgeNode> r;

    scanf("%d", &t);

    for(int i=1; i<=t; i++)
    {
        memset(visited,0,sizeof(visited));
        scanf("%d %d", &n, &m);

        for(int j=0; j<m; j++)
        {
            scanf("%d %d", &u, &v);
            vc[u].push_back(v);
        }

        for(int j=0; j<=n; j++)
        {
            if(!visited[j])
            {
                edgeNode ob;
                //bfs starts here
                q.push(j);
                visited[j]=true;
                ob.no++;
                while(!q.empty())
                {
                    int x=q.front();
                    q.pop();
                    for(int k=0; k<vc[x].size(); k++)
                    {
                        ob.e++;
                        if(!visited[vc[x][k]])
                        {
                            q.push(vc[x][k]);
                            visited[vc[x][k]]=true;
                            ob.no++;
                        }
                    }
                }

                r.push_back(ob);
            }
        }

        int min1, min2;

        min1=r[0].e;
        min2=r[0].no;

        for(int j=0; j<r.size(); j++)
        {
            if(r[j].e>=min1)
            {
                if(r[j].e==min1)
                {
                    if(r[j].no<min2)
                        min2=r[j].no;
                }
                else
                {
                    min1=r[j].e;
                    min2=r[j].no;
                }
            }

            //printf("e = %d n = %d\n", r[j].e, r[j].no);
        }

        printf("Case %d: %d %d\n", i, min1, min2);

        for(int i=0; i<10005; i++)
            vc[i].clear();
        r.clear();
    }

    return 0;
}

