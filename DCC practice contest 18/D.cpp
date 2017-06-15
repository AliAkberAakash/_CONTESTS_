#include<cstdio>
#include<iostream>
#define X 1000001

using namespace std;

typedef long long int LLD;


bool flag[X];

LLD NOD(LLD num)
{
    LLD c=0;
    for(LLD i=1; i<=num; i++)
        if(num%i==0)
            c++;

    return c;
}

void theSeries()
{
    LLD n,m;
    m=1;
    flag [1]=1;
    for(LLD i=1; i<=X; i++)
        {
            n=m+NOD(m);
            flag[n]=1;
            m=n;
        }
}


int main()
{
    theSeries();

    LLD a,b;
    int t;

    scanf("%d", &t);


    for(int i=1; i<=t; i++)
    {
        int c=0;
        scanf("%lld %lld", &a, &b);

        for(int j=a; j<=b; j++)
            if(flag[j])
                c++;

        printf("Case %d: %d\n",i,c);
    }

    return 0;
}
