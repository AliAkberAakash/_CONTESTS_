#include<stdio.h>


int main()
{
    long long int i,j,a,b, p, k,s[100000];

    while(1)
    {
        j=0;

        scanf("%lld",&a);

        p=a;

        if(!p)
            break;

            k=0;
        while(p>0)
        {
            b=p%2;
            p=p/2;


            s[k]=b;

            k++;

            if(b==1)
                j++;
        }
        k--;


        printf("The parity of ");
        while(k>=0)
        {
            printf("%lld", s[k]);
            k--;
        }
        printf(" is %lld (mod 2).\n", j);
    }

    return 0;
}
