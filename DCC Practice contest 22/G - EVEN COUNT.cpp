#include<bits/stdc++.h>

using namespace std;

typedef long long int LLI;

const LLI c=2;

bool f(LLI i)
{
    if(i%c)
        return false;
    return true;
}

LLI product(LLI n)
{
    LLI ret=1;
    while(n>0)
    {
        ret*=n%10;
        n/=10;
    }

    return ret;
}

int main()
{
    LLI l,r,k;
    int t;

    scanf("%d", &t);

    for(int i=0; i<t; i++)
    {
        LLI k=0;
        scanf("%lld %lld", &l, &r);
        for(LLI j=l; j<=r; j++)
            if(f(product(j)))
            k++;
        printf("%lld\n", k);
    }

    return 0;
}
