#include<stdio.h>

int main()
{
    int i,j,s;

    double a,b,c;

    while(scanf("%lf %lf %lf", &a, &b, &c)!=EOF)
    {
        s=0;
        while(1)
        {
            a=a-(a*(c/100.0));

            s++;

            if(a<b)
                break;
        }

        printf("%d\n", s);
    }

    return 0;
}
