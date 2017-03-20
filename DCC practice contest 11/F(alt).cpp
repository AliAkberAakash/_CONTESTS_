#include<cstdio>
#include<cstring>
#include<cstdlib>

int main()
{
    int n,a[1000],i,l,m,o,j;
    char* s = (char*) malloc(1000);
    char* t = (char*) malloc(1000);
    char** str = (char**) malloc(sizeof(char*)*100);
    for(i=0; i<100; i++)
        {
            str[i]=(char*) malloc(1000);
            strcpy(str[i], "something");
        }

    scanf("%d", &n);
    getchar();
    getchar();

    for(j=0; j<n; j++)
    {
        fgets(s,500,stdin);

        l=strlen(s);
        m=0;
        o=0;

        for(i=0; i<=l; i++)
        {
            if((s[i]==' ')||(s[i]=='\0'))
            {
                t[m]='\0';
                a[o++]=atoi(t);
                m=0;
            }
            else
                t[m++]=s[i];
        }

        fgets(s,500,stdin);

        l=strlen(s);
        m=0;
        o=0;

        for(i=0; i<=l; i++)
        {
            if((s[i]==' ')||(s[i]=='\0'))
            {
                t[m]='\0';
                strcpy(str[o++],t);
                m=0;
            }
            else
                t[m++]=s[i];
        }

        for(i=0; i<o; i++)
            printf("%s\n", str[i]);

        if(j!=n)
            printf("\n");
        getchar();
    }

    free(s);
    free(str);

    return 0;
}
