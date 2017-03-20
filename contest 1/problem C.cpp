/*
Problem C
Solved by: Liverwort
Date:3/6/12
*/

#include<stdio.h>

int main()
{
    long int i,j,t, x1,y1,x2,y2,M,a[10000],b[100000];

    scanf("%d", &t);

    for(j=1; j<=t; j++)
    {
        scanf("%ld %ld %ld %ld",&x1, &y1, &x2, &y2);

        scanf("%ld", &M);

        for(i=0; i<M; i++)
            scanf("l%d %ld", &a[i], &b[i]);

        printf("Case %ld:\n", j);

        for(i=0; i<M; i++)
        {
            if((a[i]>=x1&&a[i]<=x2)&&(b[i]>=y1&&b[i]<=y2))
                printf("YES\n");
            else
                printf("NO\n");
        }

    }

    return 0;

}
