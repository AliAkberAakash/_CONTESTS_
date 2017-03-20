#include<cstdio>

int main()
{
    int t,n,m,a,i,s;

    scanf("%d", &t);

    while(t--)
    {
        s=0;
        scanf("%d %d", &n, &m);
        int k[3652];

        for(i=0; i<=n; i++)
            k[i]=0;

        while(m--)
        {
            scanf("%d", &a);
            for(i=a; i<=n; i+=a)
                k[i]=1;
        }

        for(i=6; i<=n; i+=7)
            {
                k[i]=0;
                k[i+1]=0;
            }
        for(i=1; i<=n; i++)
            s+=k[i];

        printf("%d\n", s);
    }

    return 0;
}
