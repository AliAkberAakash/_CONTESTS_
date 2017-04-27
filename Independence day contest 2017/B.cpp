#include<cstdio>
#include<cstring>
#define MAX 1000005

long long int a[MAX];

int main()
{
    int i,t,n,k,d;

    long long int j,sum,l;

    while(scanf("%d", &t)!=EOF)
    {

        while(t--)
        {

            memset(a,0,sizeof(a));
            scanf("%d", &n);

            k=0;
            for(i=0; i<n; i++)
            {
                scanf("%d", &d);
                a[d]++;
            }

            sum = 0;

            for(j=0; j<MAX; j++)
            {
                if(a[j])
                {
                    l=a[j];
                    sum = sum + l*(l-1);
                }

            }

            printf("%lld\n", sum);

        }
    }

    return 0;
}
