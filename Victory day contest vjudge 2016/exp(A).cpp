#include<stdio.h>

int main()
{
    long long int a,b,x,y,t,temp,gcd;

    scanf("%lld", &t);

    while(t--)
    {
        scanf("%lld %lld", &a, &b);

        if(a<b)
        {
            x=a;
            y=b;
        }
        else
        {
            x=b;
            y=a;
        }

        while(x>0)
        {
            temp=y%x;
            y=x;
            x=temp;
        }

        if(y==1)
        printf("Nao\n");
        else
        printf("Sim\n");


    }

    return 0;
}
