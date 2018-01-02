#include<bits/stdc++.h>

using namespace std;

int sum[37];

void fibosum()
{
    sum[0]=0;
    sum[1]=1;
    for(int i=2; i<37; i++)
        sum[i]=sum[i-1]+sum[i-2];
}

int main()
{
    int n;

    fibosum();

    while(scanf("%d", &n)!=EOF)

    {

        printf("%d\n", sum[n]);
    }


    return 0;
}
