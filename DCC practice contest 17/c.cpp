#include<cstdio>
#include<cmath>
#define SIZE 1000000
#define sizE 1000000

int prime[sizE], nprime=0;
int mark[SIZE];

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
    int n;

    sieve();

    while(scanf("%d", &n)==1)
    {
        int i,k;
        i=k=0;

        while(prime[i++]<=n)
            k++;

        printf("%d\n", k);
    }

    return 0;
}
