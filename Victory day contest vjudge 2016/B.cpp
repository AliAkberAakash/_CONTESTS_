#include<stdio.h>

int main()
{
    int n,k;
    long long int a;

    scanf("%d", &n);

    for(int i=0; i<n; i++)
    {
        scanf("%lld", &a);
    }

    int s=0;

    while(n!=1)
    {
        n=n/2;
        s++;
    }

    s++;
    printf("%d\n",s);

    return 0;
}
