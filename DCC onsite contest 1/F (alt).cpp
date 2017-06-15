#include<cstdio>
long long int M=1000000007;
long long bigmod(long long a,long long b)
{
    long long x=1,y=a;
    while(b)
    {
        if(b&1)
            x=(x*y)%M;
        y=(y*y)%M;
        b>>=1;
    }
    return x%M;
}


/*
int bigmod(long long int a, long long int b)
{
    if(b==0)    return 1%M;
    int x=bigmod(a,b/2);
    x=(x*x)%M;

    if(b%2==1) x = (x*a)%M;

    return x;
}*/

int main()
{
    int t;

    long long int n, s;

    scanf("%d", &t);

    for(int i=1; i<=t; i++)
    {
        s=0;
        scanf("%lld", &n);
        s=((2*bigmod(n,6))+(bigmod(n,5)*6)+(5*bigmod(n,4))+M-bigmod(n,2))*bigmod(12,M-2);

        printf("Case %d: %lld\n", i,s%M);
    }


    return 0;
}
