#include<cstdio>

int main()
{
    long long int n;

    scanf("%lld", &n);

    n=(n*((n*n)+5))/6;

    printf("%lld\n", n);

    return 0;
}
