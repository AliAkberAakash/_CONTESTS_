#include<cstdio>
#include<iostream>
#include<cmath>
#define SIZE 1000005

bool prime[SIZE];
int lessPrimes[SIZE];

void sieve()
{
    int i,j;

    prime[0]=1; //initializing 0 is not prime
    prime[1]=1; //initializing 1 is not prime

    for(i=4; i<SIZE; i+=2) prime[i]=1; //all the even numbers except 2 are not prime

    int limit=sqrt(SIZE+1);

    for(i=2; i<=limit; i++)
    {
        if(!prime[i])
        {
            for(j=2*i; j<SIZE; j=j+i)
                prime[j]=1;
        }
    }

}

void countPrimes()
{
    int k=1,l=0;
    for(int i=1; i<SIZE; i++,k++)
    {
        if(!prime[i])
            l++;
        lessPrimes[k]=l;
    }

}



int main()
{
    int k;
    sieve();
    countPrimes();

    while(scanf("%d", &k)==1)
    {
        printf("%d\n", lessPrimes[k]);
    }

    return 0;
}
