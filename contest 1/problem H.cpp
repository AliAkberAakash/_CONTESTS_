/*
Problem H
Solved by: Liverwort
Date:3/6/12
*/

#include<stdio.h>
#define pi 3.14159265

int main()
{
    int tc,i;
    double r,s,p,c,d;

    scanf("%d", &tc);

    for(i=1; i<=tc; i++)
    {
        scanf("%lf", &r);

        d=2*r;
        c=pi*r*r;
        s=d*d;

        printf("Case %d: %.2lf\n", i, s-c);

    }

}
