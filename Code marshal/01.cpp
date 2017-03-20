#include<stdio.h>
#include<stdlib.h>

int main()
{
    int t,i,p,q;

    scanf("%d",&t);

    while(t--)
    {
        scanf("%d %d", &p, &q);

        if(q<p)
            printf("No\n");
        else
        {
            if(q-p<=6)
                printf("Yes\n");
            else
                printf("No\n");
        }

    }

    return 0;
}

