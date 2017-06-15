#include<cstdio>

int main()
{
    int k,n,w,s;

    while(scanf("%d %d %d", &k, &n, &w)==3)
    {
        s=((k*w)*(w+1))/2;
        if(n>=s)
            printf("0\n");
        else printf("%d\n", s-n);
    }

    return 0;
}
