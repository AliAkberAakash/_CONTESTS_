#include<stdio.h>
#include<string.h>

int main()
{
    int n, count,i;
    long long int d,x;
    char c;

    scanf("%d %lld", &n, &x);
        count=0;

        printf("%d %lld\n", n, x);

        for(i=0; i<n; i++)
        {
            c=getchar();
            getchar();

            printf("%c", c);

            scanf("%lld", &d);
            getchar();

            printf("\n%c %lld\n", c, d);

            if(c=='+')
            {   x=x+d;
                printf("\n\n%lld\n\n", x);
            }

            else
            {
                if(d<x)
                    {
                        x=x-d;
                        printf("\n\n%lld\n\n", x);
                    }
                else
                   {
                      ++count;
                      printf("\na\n");
                   }
            }
        }

        printf("%ld %d\n", x,count);

     return 0;
}
