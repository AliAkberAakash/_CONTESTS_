#include<cstdio>
#include<cmath>
#define SIZE 10000000
#define sizE 6000000

int nprime=0;
int mark[SIZE];
bool prime[sizE];

void sieve()
{
    int i,j, limit=sqrt(SIZE*1.0)+2;

    mark[0]=1;
    mark[1]=1;

    for(i=4; i<=SIZE; i+=2)
        mark[i]=1;

    prime[nprime]=2;

    for(i=3; i<=SIZE; i+=2)
    {
           if(!mark[i])
            {
            prime[++nprime] = i;

            if(i<=limit)
            {
                for(j=i*i; j<=SIZE; j+=i*2)
                mark[j]=1;
            }
        }
    }

}

int main()
{
    sieve();

    int t,n;

    scanf("%d", &t);

    for(int x=1; x<=t; x++)
    {
        int c=0;
        scanf("%d", &n);

        for(int i=0; prime[i]<n; i++)
        {
            for(int j=i; prime[j]<n; j++)
            {
                if(prime[i]+prime[j]==n)
                {
                    //printf("%d + %d = %d\n", prime[i],prime[j],n);
                    c++;
                }
            }
        }

        printf("Case %d: %d\n", x, c);
    }

    return 0;
}
