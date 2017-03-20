
#include<stdio.h>
#include<math.h>

#define pi 2*acos (0.0)

int main()
{
    int i,t;
    double r, a;

    scanf("%d", &t);

    for(i=1; i<=t; i++)
    {
        scanf("%lf", &r);

        a=(4*r*r)-(pi*r*r);

        printf("Case %d: %.lf\n", i, a);
    }
}
