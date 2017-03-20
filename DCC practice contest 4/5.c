#include<stdio.h>
#include<string.h>

int main()
{
    int n;

    char a[10000];

    while(scanf("%d", &n)!=EOF)
    {
        getchar();

        gets(a);
        printf("%s\n", a);
    }

    return 0;
}
