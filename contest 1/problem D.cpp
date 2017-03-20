/*
Problem D
Solved by: Liverwort
Date:3/6/12
*/

#include<stdio.h>
#define pi 3.14159265

int main()
{
    int t,l;
    double r,c,rc,w;

    scanf("%d", &t);

    while(t--)
    {
        scanf("%d", &l);

        r=l/5.0;
        w=3*r;

        c=r*r*pi;
        rc=l*w;

        printf("%.2lf %.2lf\n", c,rc-c);
    }

    return 0;

}
