#include<stdio.h>

int main()
{
    int t,i,j,n,x,s,k,a[100000];

    scanf("%d", &t);

    for(i=1; i<=t; i++)
    {
        scanf("%d %d", &n, &x);

        k=1;

        aakash:

        s=0;

        for(j=0; j<n; j++)
        {
            scanf("%d", &a[j]);

            s=s+(a[j]/k);
        }

        if(s==x)
        {
            printf("Case %d: %d\n", i, k);
            continue;
        }
        else
        {
            k++;
            goto aakash;
        }
    }
    return 0;
}

