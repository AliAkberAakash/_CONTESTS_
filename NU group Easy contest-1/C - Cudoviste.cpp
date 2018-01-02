#include<bits/stdc++.h>

using namespace std;

char a[100][100];
int c[5];
int row, col;


void findSpace(int i, int j)
{
    if(a[i][j]=='.' && a[i][j+1]=='.' && a[i+1][j]=='.' && a[i+1][j+1]=='.')
        c[0]++;
    else if(a[i][j]=='X' && a[i][j+1]=='X' && a[i+1][j]=='X' && a[i+1][j+1]=='X')
        c[4]++;
    else if(a[i][j]=='X' && a[i][j+1]=='X' && a[i+1][j]=='X' && a[i+1][j+1]=='.')
        c[3]++;
    else if(a[i][j]=='X' && a[i][j+1]=='X' && a[i+1][j]=='.' && a[i+1][j+1]=='X')
        c[3]++;
    else if(a[i][j]=='X' && a[i][j+1]=='.' && a[i+1][j]=='X' && a[i+1][j+1]=='X')
        c[3]++;
    else if(a[i][j]=='.' && a[i][j+1]=='X' && a[i+1][j]=='X' && a[i+1][j+1]=='X')
        c[3]++;
    else if(a[i][j]=='X' && a[i][j+1]=='.' && a[i+1][j]=='.' && a[i+1][j+1]=='.')
        c[1]++;
    else if(a[i][j]=='.' && a[i][j+1]=='X' && a[i+1][j]=='.' && a[i+1][j+1]=='.')
        c[1]++;
    else if(a[i][j]=='.' && a[i][j+1]=='.' && a[i+1][j]=='X' && a[i+1][j+1]=='.')
        c[1]++;
    else if(a[i][j]=='.' && a[i][j+1]=='.' && a[i+1][j]=='.' && a[i+1][j+1]=='X')
        c[1]++;
    else if(a[i][j]=='X' && a[i][j+1]=='X' && a[i+1][j]=='.' && a[i+1][j+1]=='.')
        c[2]++;
    else if(a[i][j]=='.' && a[i][j+1]=='.' && a[i+1][j]=='X' && a[i+1][j+1]=='X')
        c[2]++;
    else if(a[i][j]=='X' && a[i][j+1]=='.' && a[i+1][j]=='.' && a[i+1][j+1]=='X')
        c[2]++;
    else if(a[i][j]=='.' && a[i][j+1]=='X' && a[i+1][j]=='X' && a[i+1][j+1]=='.')
        c[2]++;
    else if(a[i][j]=='X' && a[i][j+1]=='.' && a[i+1][j]=='X' && a[i+1][j+1]=='.')
        c[2]++;
    else if(a[i][j]=='.' && a[i][j+1]=='X' && a[i+1][j]=='.' && a[i+1][j+1]=='X')
        c[2]++;
}


int main()
{
    scanf("%d %d", &row, &col);
    getchar();



    for(int i=0; i<row; i++)
    {
        scanf("%s", a[i]);
    }

    memset(c,0,sizeof(c));

    for(int i=0; i<row; i++)
    {
        for(int j=0; j<row; j++)
        {
            findSpace(i,j);
        }
    }

    for(int i=0; i<5; i++)
    printf("%d\n", c[i]);


    return 0;
}
