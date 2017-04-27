#include<cstdio>
#include<cmath>
#define E 1e-7

int p,q,r,s,t,u;

double func(double x)
{
    return p*exp(-x)+q*sin(x)+r*cos(x)+s*tan(x)+t*x*x+u;
}

double biSec()
{
    double l,h,mid;
    l=0; h=1;

    while(l+E<h)
    {
        mid=(l+h)/2;
        if(func(l)*func(mid)<=0)
            h=mid;
        else
            l=mid;
    }

    return (l+h)/2;
}

int main()
{
    while(scanf("%d %d %d %d %d %d", &p, &q, &r, &s, &t, &u)!=EOF)
    {
        if(func(0)*func(1)>0)
            printf("No solution\n");
        else
            printf("%.4lf\n", biSec());
    }

    return 0;
}
