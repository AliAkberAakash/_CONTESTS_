#include<cstdio>
#include<cmath>
#include<cstring>

int main()
{
    int t,l,q,k;
    char c[100][100];
    char s[10000];

    scanf("%d", &t);
    getchar();

    while(t--)
    {

        scanf("%[^\n]", s);
        getchar();

        l=strlen(s);

        q=sqrt(l);

        if((q*q)!=l)
        {
            printf("INVALID\n");
            continue;
        }
        k=0;

        for(int i=0; i<q; i++)
        {
            for(int j=0; j<q; j++)
            {
                c[i][j]=s[k];
                k++;
            }
        }

        for(int i=0; i<q; i++)
        {
            for(int j=0; j<q; j++)
            {
                printf("%c", c[j][i]);
            }
        }

        printf("\n");

    }

    return 0;
}
