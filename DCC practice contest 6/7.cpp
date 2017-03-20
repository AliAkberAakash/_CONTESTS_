#include<stdio.h>

int main()
{
    int i,j,k,t,x1,x2,y1,y2,p,q,r;

    scanf("%d", &t);

    for(i=1; i<=t; i++)
    {
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
        scanf("%d", &r);

        printf("Case %d:\n", i);

        for(k=0; k<r; k++)
        {
            scanf("%d %d", &p, &q);

            if(p>x1 && p<x2 && q>y1 && q<y2)
                printf("Yes\n");
            else
                printf("No\n");
        }
    }

    return 0;

}



