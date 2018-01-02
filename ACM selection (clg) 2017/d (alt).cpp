#include<bits/stdc++.h>

using namespace std;
int arr[105][105];
int tst;

bool bfs(int x, int y)
{
    queue <int> q;
    int visited[105];
    memset(visited,0,sizeof(visited));
    q.push(x);

    visited[y]=1;
    while(!q.empty())
    {
        int p=q.pop();
        for(int i=0; i<tst; i++)
        {
            if(arr[p][i]&& !visited[i])
            {
                q.push_back(i);
                visited[i]=1;
            }
        }
    }
}


int main()
{
    int no,x,nd,mediums;
    map <int,int> answers;

    while(scanf("%d", &tst))
    {

        memset(arr,0,sizeof(arr));
        memset(visited,0,sizeof(visited));

        mediums=0;


        for(int i=0; i<tst; i++)
        {
            scanf("%d", &nd);
            getchar();
            scanf("(%d)",&no);
            for(int j=0; j<no;  j++)
            {
                scanf("%d", &x);
                arr[nd][x]=1;
            }

        }


        for(int i=0; i<task; i++)
        {
            for(int j=0; j<task; j++)
            {
                if(a[i][j])
                {
                    for(int k=0; k<tst; k++)
                    {
                        if(bfs(k,i) && k!=i)
                        answers[i]=j;
                    }
                }
            }
        }


        getchar();
    }


    return 0;
}
