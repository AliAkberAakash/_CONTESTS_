#include<cstdio>
#include<cstring>

int main()
{
    char s[1001];
    int n,l;

    while(scanf("%d", &n)==1)
    {
        getchar();

        while(n--)
        {
            scanf("%s", s);
            getchar();

            l=strlen(s);

            if(l>10)
            printf("%c%d%c\n", s[0],(l-2), s[l-1]);
            else
            printf("%s\n", s);
        }
    }


    return 0;
}
