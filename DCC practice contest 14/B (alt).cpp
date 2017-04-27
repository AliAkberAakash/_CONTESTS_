#include<cstdio>

bool isPrime(int x)
{
    if(x==1)
        return false;

    for(int i=2; i*i<=x; i++)
        if(!(x%i))
            return false;
    return true;
}

void evenPrime(int x, int sp)
{
    if(!sp)
        printf(" ");
    int k=x;
    sp++;
    if(isPrime(x-2))
        printf("2 %d\n", x-2);
    else
    {
        x=x-3;
        while(1)
        {
            if(isPrime(x))
            {
                printf("%d", x);
                break;
            }
            x--;
        }

        evenPrime(k-x,sp);
    }

}

int main()
{
    int x,t;

    scanf("%d", &t);

    while(t--)
    {
        scanf("%d", &x);
        if(isPrime(x))
            printf("%d\n", x);
        else
        {
            if(!(x%2))
                {
                    evenPrime(x,0);
                    printf(" ");

                }
            else
            {

            }

        }
    }


    return 0;
}
