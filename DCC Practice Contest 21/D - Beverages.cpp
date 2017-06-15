#include<cstdio>
#include<cstring>
#include<iostream>
#include<string>
#include<map>
#include<queue>
#include<vector>

using namespace std;

int inDegree[205];
bool visited[105];

int main()
{
    int n,m,cas;
    map <string,int> k;
    map <int,string> l;
    string s,t;
    vector <int> v[105];
    queue <int> q;


    cas=0;
    while(scanf("%d", &n)!=EOF)
    {
        cas++;
        printf("Case #%d: Dilbert should drink beverages in this order: ", cas);
        memset(inDegree,0,sizeof(inDegree));
        memset(visited,0,sizeof(visited));

        for(int i=0; i<n; i++)
        {
            cin>>s;
            k[s]=i;
            l[i]=s;
        }

        scanf("%d", &m);

        while(m--)
        {
            cin>>s>>t;
            v[k[s]].push_back(k[t]);
            inDegree[k[t]]++;
        }

        for(int i=0; i<n; i++)
        {
            if(!inDegree[i]&&!visited[i])
            {
                q.push(i);
                visited[i]=true;
            }

        }


        int o=0;
        while(!q.empty())
        {
            int x=q.front();
            if(o)
                printf(" ");
            cout<<l[x];

            q.pop();
            for(int i=0; i<v[x].size(); i++)
            {
                int y=v[x][i];
                inDegree[y]--;
            }
            for(int i=0; i<n; i++)
            {
                if(!inDegree[i]&&!visited[i])
                {
                    q.push(i);
                    visited[i]=true;
                }

            }
            o++;
        }

        for(int i=0; i<105; i++)
            v[i].clear();

        while(!q.empty())
            q.pop();

        puts(".\n");
        getchar();

    }


    return 0;
}

