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

        gcd=0;

        while(x>0)
        {
            temp=y%x;
            y=x;
            x=temp;
        }



    }

    return 0;
}
