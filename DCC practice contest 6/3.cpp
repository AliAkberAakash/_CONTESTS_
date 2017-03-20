#include<stdio.h>

int main()
{
    long long int n,m,a;

    long long int p,q;

    while(scanf("%lld %lld %lld", &n, &m, &a)!=EOF)
    {
        p=(n/a);
        if(n%a>0)
            p++;
        q=m/a;
        if(m%a>0)
            q++;

        printf("%lld\n", p*q);
    }

    return 0;
}
