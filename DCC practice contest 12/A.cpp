#include<cstdio>

int main()
{
    long long int a,b,s;

    while(scanf("%lld %lld", &a, &b)!=EOF)
    {
        s=a+b;
        printf("%lld\n", s);
    }

    return 0;
}
