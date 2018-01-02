#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int x,fibo[100];

    fibo[0]=0;
    fibo[1]=1;

    for(int i=2; i<=82; i++)
        fibo[i]=fibo[i-1]+fibo[i-2];

    scanf("%lld", &x);

    while(x)
    {
        printf("%lld\n", fibo[x+1]);

        scanf("%d", &x);
    }


    return 0;
}
