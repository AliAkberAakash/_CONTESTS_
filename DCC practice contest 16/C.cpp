#include<cstdio>
#include<iostream>
#include<vector>
#include<cstring>
#include<queue>

using namespace std;

int colorIt(int x, int y);

bool checked[202];
int color[202];
int cunt[202];

vector <int> edges[200];
queue <int> q;

int main()
{
    int nodes, nEdges, x,y;

    while(1)
    {
        scanf("%d", &nodes);
        if(!nodes)
            break;
        scanf("%d", &nEdges);

        for(int i=0; i<202; i++)
            {
                color[i]=0;
                cunt[i]=0;
                checked[i]=0;
            }


        for(int  i=0; i<nEdges; i++)
        {
            scanf("%d %d", &x, &y);
            edges[x].push_back(y);
            edges[y].push_back(x);
        }

        q.push(0);
        checked[0]=1;

        while(!q.empty())
        {
            int x=0;

            int w=q.front();
            q.pop();
            color[w]=1;

            for(int i=0; i<edges[w].size(); i++)
            {
                int z=edges[w][i];
                if(checked[z]==0)
                {
                    checked[z]=1;
                    q.push(z);
                }
            }
            color[w]=colorIt(w, color[w]);
        }

        for(int i=0; i<nodes;  i++)
                edges[i].clear();
        while(!q.empty())
            q.pop();


        int k=0;
        for(int i=0; i<202; i++)
        if(color[i]>2)
        {
            printf("NOT BICOLORABLE.\n");
            k=1;
            break;
        }

        if(!k)
           printf("BICOLORABLE.\n");
    }

    return 0;

}

int colorIt(int x, int y)
{
    int k=0;
    for(int i=0; i<edges[x].size(); i++)
    {
        int z=edges[x][i];
        if(y==color[z])
        {
            y=color[z]+1;
            k++;
            break;
        }
    }
    if(k>0)
        y=colorIt(x,y);
    return y;
}
