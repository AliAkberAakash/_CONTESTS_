#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int n;

    int i=0;
    while(scanf("%lld", &n)!=EOF)
    {
        i++;
        long long int d=(n*(n+1))/2;
        printf("Case %d: %lld\n", i, d);
    }


    return 0;
}
