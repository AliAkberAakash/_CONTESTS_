/*
* Solution to F - 10 Kinds of People
* Solved by: Ali AKber Aakash
* Email: cedward318@gmail.com or ali852609@gmail.com
*/

#include<bits/stdc++.h>

using namespace std;

int r,c;
char a[1005][1005];
bool x[1005][1005];

bool legit(int x, int y)
{
    if(x>=0 && x<r && y>=0 && y<c)
        return true;
    return false;
}

void check(int x1, int y1, int x2, int y2, char p)
{
    if(!legit(x1,y1))
        return;
    if(a[x1][y1]==p && x[x1][y1]==0)
    {
        x[x1][y1]=true;
        check(x1+1,y1,x2,y2,p);
        check(x1-1,y1,x2,y2,p);
        check(x1,y1+1,x2,y2,p);
        check(x1,y1-1,x2,y2,p);
    }
}

int main()
{
    int q,x1,x2,y1,y2;

    scanf("%d %d", &r, &c);
    getchar();

    for(int i=0; i<r; i++)
    {
        scanf("%s", a[i]);
    }

    puts("\n");

    scanf("%d", &q);

    while(q--)
    {
        memset(x,0,sizeof(x));

        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

        x1--;
        y1--;
        x2--;
        y2--;

        if(a[x1][y1]!=a[x2][y2])
            {
                printf("neither\n");
            }
        else if(a[x1][y1]=='0')
        {
            check(x1,y1,x2,y2,'0');

            if(x[x2][y2]==1)
                printf("binary\n");
            else
                printf("neither\n");
        }
        else
        {
            check(x1,y1,x2,y2,'1');

            if(x[x2][y2]==1)
            printf("decimal\n");
            else
                printf("neither\n");
        }
    }

    return 0;
}
