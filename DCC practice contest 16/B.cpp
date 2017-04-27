#include<cstdio>
#include<iostream>
#include<vector>
#include<cstring>

using namespace std;

bool grid[101][101];
int  flag[101][101];

int m,n;

void floodFill(int x, int y);

int cunt;

int main()
{
    int i,j;
    int ch;

    string s;

    while(scanf("%d %d", &m, &n)==2)
    {
        if(!m && !n)
            break;
        cunt=0;

        memset(grid,0,sizeof(grid));
        memset(flag,0,sizeof(flag));

        getchar();
        for(i=0; i<m; i++)
        {
            getline(cin,s);
            for(j=0; j<n; j++)
            {
                if(s[j]=='@')   grid[i][j]=true;
                //else    grid[i][j]=true;
            }
        }

        for(i=0; i<m; i++)
        {
            for(j=0; j<n; j++)
            {
                if(grid[i][j]==true&&flag[i][j]==0)
                {
                    cunt++;
                    floodFill(i,j);
                }
            }
        }

        printf("%d\n", cunt);
    }

    return 0;
}

void floodFill(int i, int j)
{
    //Base case
    if(i<0 || j<0 || i>m-1 || j>n-1)
    return;

    if(grid[i][j]==true && flag[i][j]==0)
    {
        flag[i][j]=1;

        floodFill(i+1,j);
        floodFill(i-1,j);
        floodFill(i,j+1);
        floodFill(i,j-1);
        floodFill(i+1,j+1);
        floodFill(i+1,j-1);
        floodFill(i-1,j+1);
        floodFill(i-1,j-1);
    }

}

