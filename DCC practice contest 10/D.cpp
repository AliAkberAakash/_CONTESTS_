#include<stdio.h>

int main()
{
    int k,w,n,i,s,b;

    scanf("%d %d %d", &k,&n,&w);

    s=0;

    for(i=1; i<=w; i++)
    {
        s=s+(k*i);
    }

    if(s>w)
        printf("%d\n", s-n);
    else
        printf("0\n");

    return 0;
}
