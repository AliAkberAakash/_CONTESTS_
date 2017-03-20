#include<stdio.h>

int main()
{
    long int i,n,s;

    while(scanf("%ld", &n)!=EOF)
    {
        s=0;

        if(n==0)
            s=1;

        else if(n<0)

           {
              for(i=1; i>=n; i--)
                s=s+i;
           }
        else
            {
              for(i=1; i<=n; i++)
                s=s+i;
            }

        printf("%ld\n", s);

    }

    return 0;
}
