#include<cstdio>
#include<iostream>
#include<vector>
#define M 1000000007

using namespace std;

vector<long long int> v;




long long int bigMod ( long long a, long long p)
{
    long long res = 1;
    long long x = a;

    while ( p )
    {
        if ( p & 1 ) //p is odd
        {
            res = ( res * x ) % M;
        }
        x = ( x * x ) % M;
        p = p >> 1;
    }

    return res;
}


void SUM()
{
    long long int s=0;
    for(int j=1; j<=1000000000;  j++)
        {
            s=s+bigMod(j,5);
            v.push_back(s);
        }
}


int main()
{

    int t;
    long long int n,s;

    scanf("%d", &t);

    SUM();

    for(int i=1; i<=t; i++)
    {
        scanf("%lld", &n);

        printf("Case %d: %lld\n", i,v[n-1]);
    }


    return 0;
}

