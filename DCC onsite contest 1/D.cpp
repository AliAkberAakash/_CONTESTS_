#include<cstdio>
#include<string>
#include<vector>
#include<cstring>
#include<iostream>

using namespace std;

int flag[101][101];
char grid[101][101];

int m,n,xx,yy;

vector<int> yo;

int minimum()
{
    int m;

    if(yo.size()<1) return 0;
    else
    {
        m=yo[0];
        for(int i=0; i<yo.size(); i++)
            if(yo[i]<m)
                m=yo[i];
    }

    return m;
}

void flood(int x, int y, int z);

int main()
{
    int t;

    scanf("%d", &t);


    for(int i=1; i<=t; i++)
    {
        memset(flag,0,sizeof(flag));
        memset(flag,0,sizeof(grid));

        scanf("%d %d", &m, &n);
        //getchar();
        for(int j=0; j<m; j++)
        {
            scanf("%s", grid[j]);
        }

        int l=0;
        for(int j=0; j<m; j++)
        {
            for(int k=0; k<n; k++)
            {
                if(grid[j][k]=='A')
                {
                    flood(j,k-1,1);
                    flood(j,k+1,1);
                    flood(j+1,k,1);
                    flood(j-1,k,1);
                    l=1;
                    break;
                }
            }

            if(l)
                break;
        }

        int MM=minimum();

       if(!MM)
            printf("Case %d: I lost her forever\n", i);
       else
            printf("Case %d: I did it! Lost only %d energy.\n", i, MM);

    }
    return 0;
}

void flood(int i, int j, int z)
{
    if((i>m) ||(j>n) || (i<0) || (j<0))  return;
    else if(grid[i][j]=='#'||grid[i][j]=='A')return;
    else if(grid[i][j]=='B')
    {
        printf("%d ",z);
        yo.push_back(z);
    }
    else
    {
        if(flag[i][j]==0)
        {
            printf("%d %d %d\n",i,j,z);
            flag[i][j]=z;

            flood(i,j-1,z+1);
            flood(i,j+1,z+1);
            flood(i+1,j,z+1);
            flood(i-1,j,z+1);
        }
    }
}
