#include<bits/stdc++.h>

using namespace std;

int main()
{
    int testCase, nodes, x,y,m;
    int minder_meer[100005];
    vector <int> adj[100005];
    queue <int> que;

    scanf("%d", &testCase);

    for(int i=0; i<testCase; i++)
    {
        scanf("%d", &nodes);
        for(int j=1; j<=nodes; j++)
        {
            scanf("%d", &minder_meer[j]);
        }
        //adj[0].push_back(0);
        for(int j=1; j<nodes; j++)
        {
            scanf("%d %d", &x, &y);
            adj[x].push_back(y);
            adj[y].push_back(x);
        }

        int visited[100005];
        //for(int j=1; j<=nodes; j++)
        {
            int j=1;
            memset(visited,0,sizeof(visited));
            que.push(j);
            while(!que.empty())
            {
                int x=que.front();
                que.pop();
                visited[x]=1;
                int meer=0;
                for(int k=0; k<adj[x].size() && meer<=2; k++)
                {

                    if(!visited[adj[x][k]])
                    {
                        //visited[adj[x][k]]=1;
                        cout<<minder_meer[adj[x][k]]<<" meer for "<<adj[x][k]<<endl;
                        que.push(adj[x][k]);
                        if(!minder_meer[adj[x][k]])
                        {
                            if(meer==2)
                                printf("%d %d\n", j, adj[x][k]);
                        }
                        else
                        {
                            meer++;
                            cout<<"came here";
                        }

                    }
                }
            }
            while (!que.empty())
            {
                que.pop();
            }
        }
    }


    return 0;
}
