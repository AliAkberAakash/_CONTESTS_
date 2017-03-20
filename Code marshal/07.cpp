#include<stdio.h>
#include<math.h>

#define pi acos(-1)

int main()
{
    int t, n, i;

    double c, s, r, a;

    scanf("%d", &t);

    while(t--)
    {
        scanf("%d", &n);

        r=n/2.0;
        s=(n*2*n)/2.0;
        c=pi*r*r;

        a=s-c;

        printf("%.2lf\n", a);
    }


    return 0;
}

