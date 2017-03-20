#include<cstdio>
#include<cstring>

int main()
{
    int i;
    char c[20];

    while(scanf("%d", &i)!=EOF)
    {

        getchar();

        scanf("%[^\n]", c);
        getchar();

        printf("%s\n", c);


    }

    return 0;
}
