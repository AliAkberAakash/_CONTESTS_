#include<stdio.h>
#include<math.h>
#define pi acos(-1)

int main()
{
    double l,w,r,c,s,p;

    int t;

    scanf("%d", &t);

    while(t--)
    {
        scanf("%lf", &l);
        w=(6*l)/10.0;
        s=l*w;
        r=l/5.0;
        c=pi*r*r;

        printf("%.2lf %.2lf\n", c, s-c);

    }

    return 0;

}
