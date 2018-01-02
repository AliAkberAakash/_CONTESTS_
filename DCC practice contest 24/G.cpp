#include<bits/stdc++.h>

using namespace std;

long long int f91(long long int x)
{
    if(x<=100)
        return f91(f91(x+11));
    return x-10;
}

int main()
{
    long long int x;

    scanf("%lld", &x);

    while(x)
    {
        printf("f91(%lld) = %lld\n", x, f91(x));
        scanf("%lld", &x);
    }


    return 0;
}
