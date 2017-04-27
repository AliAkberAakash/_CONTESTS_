#include<cstdio>
#include<iostream>
#define SIZE 7500

int x[SIZE];
int c[]={1,5,10,25,50};

void Changes()
{
    x[0]=1;
    int coin;
    for(int i=0; i<5; i++)
    {
        coin=c[i];
        for(int j=0; j<SIZE; j++)
            {
                if(x[j])
                    x[j+coin]+=x[j];
            }
    }
}

int main()
{
    Changes();
    int l;

    while(scanf("%d", &l)==1)
        printf("%d\n", x[l]);

    return 0;
}
