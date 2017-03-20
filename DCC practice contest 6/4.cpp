#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a,b,s,t,i;

    scanf("%d", &t);

    for(i=1; i<=t; i++)
    {
        s=0;

        scanf("%d %d", &a, &b);

        s=(abs(a-b)*4)+(a*4)+19;

        printf("Case %d: %d\n", i, s);
    }

    return 0;
}
