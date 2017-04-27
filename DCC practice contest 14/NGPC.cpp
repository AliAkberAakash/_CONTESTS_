#include<cstdio>
#include<cmath>
#define SIZE 10000000
#define sizE 6000000
#define md 1

int prime[sizE], nprime=1;
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
    sieve();

    int q,n;

    while(scanf("%d %d", &q,&n)!=EOF)
    {
        if(!q&&!n)
            break;
        if(((prime[q]%2)+(prime[n]%2)%2))
            printf("Odd\n");
        else
            printf("Even\n");
    }

    return 0;
}
