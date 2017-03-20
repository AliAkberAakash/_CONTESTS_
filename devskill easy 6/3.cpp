#include<stdio.h>

int main()
{
    long int n,t,i,a[1000],b[100000], mum=-999999;

    a[1]=1;
    a[2]=3;

    scanf("%ld", &t);

    for(i=1; i<=t; i++)
    {
        scanf("%ld", &b[i]);
        if(b[i]>mum)
            mum=b[i];
    }

    a[1]=1;
    a[2]=3;
    for(i=3; i<=mum;i++)
        a[i]=a[i-1]+a[i-2];

    for(i=1; i<=t; i++)
    {
        printf("%ld\n", a[b[i]]);
    }


    return 0;
}

