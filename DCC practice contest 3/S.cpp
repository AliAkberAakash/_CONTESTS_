#include<stdio.h>

int main()
{
    long int a,b,i,j,k,l,m,t,p;

    scanf("%ld", &t);
    for(i=0; i<t; i++)
    {
        scanf("%ld", &a);
        scanf("%ld", &b);

        for(j=0; j<b; j++)
        {
            for(k=1; k<=a; k++)
            {
                for(l=1; l<=k; l++)
                    printf("%ld", k);
                printf("\n");

            }
            for(k=a-1; k>=1; k--)
            {
                for(l=0; l<k; l++)
                    printf("%ld", k);
                printf("\n");
            }

            if((i!=t-1)||(j!=b-1))
                printf("\n");
        }
    }
}
