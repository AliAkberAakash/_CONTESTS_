#include<stdio.h>

int main()
{
    int n,i;

    scanf("%d", &n);

    if(n%2==0)
    {
        if(n==2)
            printf("NO\n");
        else
            printf("YES\n");
    }
    else
        printf("YES\n");

    return 0;
}

