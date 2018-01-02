#include<stdio.h>
#include<string.h>

int main()
{
    int i,n,count;
    long long int x,d;
    char c;

   scanf("%d %lld", &n, &x);

        count=0;

        getchar();

        for(i=0; i<n; i++)
        {
            c=getchar();
            getchar();
            scanf("%lld", &d);
            getchar();

            if(c=='+')
                x=x+d;
            else
                {   if(d>x)
                    count++;

                    else
                       {
                           x=x-d;
                       }
                }

        }

        printf("%lld %d\n", x, count);

}

