#include<cstdio>
#include<iostream>
#include<cstring>

using namespace std;

int flag[105][105];
bool visited[105][105];
char grid[105][105];

int m,n;

void toggle(char &c)
{
    if(c=='W')
       c='B';
    else
    c='W';
}

bool valid(int x, int y)
{
    if(x>=0 && y>=0 && x<n && y<m && (grid[x][y]=='.') && visited[x][y]==0)  return true;

    return false;
}

void flood(int i, int j, char c)
{
    if(valid(i,j))
    {
        toggle(c);
        flag[i][j]=c;
        visited[i][j]=true;

        flood(i,j+1,c);
        flood(i,j-1,c);
        flood(i-1,j,c);
        flood(i+1,j,c);
    }

}



int main()
{
    scanf("%d %d", &n, &m);

    int x,y,z;

    memset(flag, 0, sizeof(flag));
    memset(visited, 0, sizeof(visited));

    for(int i=0; i<n; i++)
        scanf("%s",grid[i]);

    char c='W';

    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
            if(grid[i][j]=='.' && visited[i][j]==0)
                flood(i,j,c);


    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(!flag[i][j])
                printf("-");
            else
                printf("%c", flag[i][j]);
        }
        puts("");
    }

    return 0;
}
