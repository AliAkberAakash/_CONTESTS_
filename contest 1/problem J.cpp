/*
Problem J
Solved by: Liverwort
Date:3/6/12
*/

#include<stdio.h>

int main()
{
    int n,k,i,s,p,a[100];

    while(scanf("%d", &k))
    {
        scanf("%d", &n);

        s=0;

        for(i=0; i<n; i++)
        {
            scanf("%d", &a[i]);
            s=s+a[i];
        }

        p=n*k;

        if(s-p>0)
        {
            printf("%d\n", s-p);
        }

        else  printf("0\n");
    }


    return 0;

}
