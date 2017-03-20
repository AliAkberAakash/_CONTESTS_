#include<stdio.h>
#include<string.h>

int main()
{
    int i,n;
    char c[100000];

    while(gets(c))
    {

    n=strlen(c);

    for(i=0; i<n; i++)
        printf("%c", c[i]-7);
    printf("\n");
    }

    return 0;
}
