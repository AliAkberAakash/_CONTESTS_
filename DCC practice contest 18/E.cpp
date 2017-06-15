#include<cstdio>
#include<iostream>
#include<cstring>
#include<queue>

using namespace std;

int flag[101][101];
char grid[101][101];

queue<pair <int,int> > q;

int m,n;

bool valid(int x, int y)
{
    if(x<m&&y<n&&x>=0&&y>=0&&grid[x][y]!='#')    return true;
    return false;
}

int bfs(int i, int j)
{
    flag[i][j]=1;
    pair <int,int> p;

    int z=1;

    p=make_pair(i,j);
    q.push(p);

    while(!q.empty())
    {
        p=q.front();
        q.pop();

        i=p.first;
        j=p.second;
        //z=flag[i][j];

        if(valid(i,j+1)&&!flag[i][j+1])
        {
            z++;
            flag[i][j+1]=1;
            p=make_pair(i,j+1);
            q.push(p);
        }
        if(valid(i,j-1)&&!flag[i][j-1])
        {
            z++;
            flag[i][j-1]=1;
            p=make_pair(i,j-1);
            q.push(p);
        }
        if(valid(i+1,j)&&!flag[i+1][j])
        {
            z++;
            flag[i+1][j]=1;
            p=make_pair(i+1,j);
            q.push(p);
        }
        if(valid(i-1,j)&&!flag[i-1][j])
        {
            z++;
            flag[i-1][j]=1;
            p=make_pair(i-1,j);
            q.push(p);
        }

    }

    return z;
}


int main()
{
    int t;
    char ch;
    int pos1,pos2, bpos1, bpos2;

    scanf("%d", &t);

    for(int k=1; k<=t; k++)
    {
        memset(flag,0,sizeof(flag));
        memset(grid,0,sizeof(grid));

        scanf("%d %d", &n, &m);

        bool O=true;

        for(int i=0; i<m; i++)
        {
            scanf("%s", grid[i]);
            for(int j=0; j<n&&O; j++)
            {
                if(grid[i][j]=='@')
                    {
                        pos1=i;
                        pos2=j;
                        O=false;
                    }
            }
        }

        printf("Case %d: %d\n",k,bfs(pos1,pos2));



        while(!q.empty())
            q.pop();
    }


    return 0;
}
