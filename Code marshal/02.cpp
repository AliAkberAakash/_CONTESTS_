#include<stdio.h>

int commonDivisor(int x)
{
    int k=0,i;

    for(i=1; i<=x; i++)
    {
        if(((x/i)*i)==x)
            k++;
    }

    return k;
}


int main()
{
    int a,b,t,i,j,k,o, maxi;
    int p[10000], q[10000];

    scanf("%d", &t);

    for(o=1; o<=t; o++)
    {
        maxi=-9999999;
        scanf("%d %d", &a, &b);
        scanf("%d", &j);



        for(i=0; i<j; i++)
        {
            scanf("%d", &p[i]);
        }

        for(i=a; i<=b; i++)
        {
            q[i]=commonDivisor(i);

            if(p[q[i]]>maxi)
                {
                    maxi=p[q[i]];
                    k=i;
                }
        }


        printf("Case %d: %d\n", o,k);


    }

    return 0;
}
