#include<cstdio>
#include<cstring>
#include<iostream>
#include<cmath>
#define SIZE 1000000005

bool prime[SIZE];

void sieve()
{
    int i,j;

    prime[0]=1; //initializing 0 is not prime
    prime[1]=1; //initializing 1 is not prime

    for(i=4; i<SIZE; i+=2) prime[i]=1; //all the even numbers except 2 are not prime

    int limit=sqrt(SIZE+1);

    for(i=2; i<=limit; i+=2)
    {
        if(!prime[i])
        {
            for(j=2*i; j<SIZE; j=j+i)
                prime[j]=1;
        }
    }

}

void printMinimum(int n)
{
    int k=n;

    if(!k) return;

    if(!prime[n-1])
        n=n-2;


    while(1)
    {
        if(!prime[n])
            {
                printf("%d ", n);
                break;
            }
        else
            n--;
    }

    printMinimum(k-n);
}

int main()
{
    sieve();

    int t,n;

    scanf("%d", &t);

    while(t--)
    {
        scanf("%d", &n);
        printMinimum(n);
        printf("\n");
    }


    return 0;
}
