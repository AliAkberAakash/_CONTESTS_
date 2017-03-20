#include<stdio.h>

int main()
{
    long long int n,h[100001],i,j,k,s,m;

    scanf("%lld", &n);

    for(i=1; i<=n; i++)
    {
        scanf("%lld", &h[i]);
    }

    s= -1;
    m=0;
    for(i=1; i<=n; i++)
    {
        k=0;
        for(j=1; j<=n; j++)
        {
            if(h[i]>h[j])
                k++;
        }
        if(k>m)
            {
                s=i;
                m=k;
            }
        else if(k==m)
        {
            s=-1;
        }
    }

    printf("%lld\n", s);



    return 0;
}
