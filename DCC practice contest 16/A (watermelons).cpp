#include<cstdio>

int main()
{
    int n;

    while(scanf("%d", &n)==1)
    {
        if((n>2)&&(n%2==0))
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}
