#include<cstdio>
#include<cmath>
#define SIZE 100000000
#define sizE 6000000

int prime[sizE], nprime=0;
int mark[SIZE];

void sieve()
{
    int i,j, limit=sqrt(SIZE*1.0)+2;

    mark[1]=1;

    for(i=4; i<SIZE; i+=2)
        mark[i]=1;

    prime[nprime++]=2;

    for(i=3; i<SIZE; i+=2)
    {   if(!mark[i])
        {
            prime[nprime++] = i;

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

    for(int i=0; i<nprime; i+=100)
    {
        printf("%d\n", prime[i]);
    }

    return 0;
}
