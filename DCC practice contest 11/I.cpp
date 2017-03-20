#include<cstdio>

int main()
{
    unsigned long long a,b,m,i;

    i=0;
    m=10000007;

    while(scanf("%llu %llu", &a, &b)!=EOF)
    {
        i++;
        a=a%m;
        b=b%m;
        a=(a*b)%m;

        printf("Case #%llu: %llu\n", i,a);
    }

    return 0;
}
