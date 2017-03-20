#include<stdio.h>

int main()
{
    int n,s;

    double u,d;


    while(1)
    {
    scanf("%d %lf %lf", &n, &u, &d);

    if(!n)
        break;
        s=((n-1-u)*(2.0/(u-d)));
        s++;


        printf("%d\n", s);
    }

    return 0;
}
