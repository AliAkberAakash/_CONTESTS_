#include<cstdio>
#include<cstring>
#include<cstdlib>

int main()
{
    char s[201],k[200],c;
    int t,m,l,p;

    scanf("%d", &t);
    getchar();

    for(int i=1; i<=t; i++)
    {

        printf("Case %d: ", i);
        scanf("%[^\n]", s);
        getchar();

        l=strlen(s);

        m=0;

        c=s[0];

        for(int j=1; j<l; j++)
        {
            if((s[j]>=48)&&(s[j]<=57))
            {
                k[m]=s[j];
                m++;
            }
            else
            {
                k[m]='\0';
                p=atoi(k);

                for(int x=0; x<p; x++)
                    printf("%c", c);
                c=s[j];
                m=0;
            }

            if(j==l-1)
            {
                k[m]='\0';
                p=atoi(k);

                for(int x=0; x<p; x++)
                    printf("%c", c);
            }
        }


        printf("\n");
    }

    return 0;
}
