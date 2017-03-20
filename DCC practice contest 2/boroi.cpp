#include<stdio.h>

int main()
{
    long int a,b,c,d,e;

    scanf("%ld %ld %ld", &a, &b, &c);

    if(a%c==0)
        d=a/c;
    else
        d=(a/c)+1;
    if(b%c==0)
        e=b/c;
    else
        e=(b/c)+1;

        printf("%ld", e*d);

    return 0;
}
