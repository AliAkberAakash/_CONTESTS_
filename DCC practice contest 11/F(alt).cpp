#include<cstdio>
#include<cstring>
#include<cstdlib>

int main()
{
    int n,a[1000],i,k,o,j,d;
    char c;

    char** str = (char**) malloc(sizeof(char*)*100);

    for(i=0; i<100; i++)
        {
            str[i]=(char*) malloc(1000);
            strcpy(str[i], "something");
        }

    scanf("%d", &n);
    getchar();
    getchar();

    while(n--)
    {
        i=0;
        do
        {
            scanf("%d%c", &d,&c);
            a[i++]=d;
        }
        while(c!='\n');

        for(o=0; o<i; o++)
        {
            scanf("%s", str[a[o]]);
            getchar();
        }



        for(k=1; k<=o; k++)
            printf("%s\n", str[k]);

        if(n)
        {
            printf("\n");
            getchar();
        }
    }

    free(str);

    return 0;
}
