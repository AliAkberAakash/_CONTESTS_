#include<cstdio>
#include<cstring>
#include<iostream>

using namespace std;

void flood(int i, int j);


char  grid[2][501];
bool flag[2][501];

int n;

bool valid(int i, int j)
{
    if(i>0 || j>0 || i<2 || j<n)
        return true;
    return false;
}

int main()
{
    int t;

    scanf("%d", &t);

    while(t--)
    {
        int k=0;
        memset(grid,0,sizeof(grid));
        memset(flag,0,sizeof(flag));

        scanf("%d", &n);
        getchar();

        scanf("%s", grid[0]);
        scanf("%s", grid[1]);


        for(int i=0; i<2; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(grid[i][j]=='#'&&flag[i][j]==0)
                {
                    flood(i,j);
                    k++;
                }

            }
        }

        if(k>1)
            printf("no\n");
        else
            printf("yes\n");

    }

    return 0;
}

void flood(int i, int j)
{
    if(!flag[i][j])
    {
        flag[i][j]=1;

        if(valid(i,j+1)&&grid[i][j+1]=='#'&&flag[i][j+1]==0)
            flood(i,j+1);
        else if(valid(i,j-1)&&grid[i][j-1]=='#'&&flag[i][j-1]==0)
            flood(i,j-1);
        else if(valid(i+1,j)&&grid[i+1][j]=='#'&&flag[i+1][j]==0)
            flood(i+1,j);
        else if(valid(i-1,j)&&grid[i-1][j]=='#'&&flag[i-1][j]==0)
            flood(i-1,j);
    }



}
