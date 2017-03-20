#include<stdio.h>
#include<string.h>

int main()
{
    int i,n,m;

    char a[1000];

    scanf("%d", &n);

    getchar();

    for(i=0; i<n; i++)
    {
        gets(a);

        if(strlen(a)==5)
            printf("3\n");
        else if((a[0]=='n')||(a[0]=='e')||(a[1]=='n')||(a[1]=='e')||(a[2]=='n')||(a[2]=='e'))
            printf("1\n");
        else printf("2\n");

    }
}
