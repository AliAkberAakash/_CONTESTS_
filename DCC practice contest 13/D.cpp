#include<cstdio>
#include<iostream>

int main()
{
    int k,n,sum;

    int a[55];

    sum=0;

    scanf("%d %d", &n, &k);

    for(int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);

    }

    for(int i=0; i<n; i++)
    {
        if((a[i]>=a[k-1]) && a[i])
        {
            sum++;
        }
    }

    printf("%d\n", sum);

    return 0;
}
