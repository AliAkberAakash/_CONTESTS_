#include<stdio.h>
#include<string.h>


int main()
{
    int t,d,i,j,k,f=0;
    char s[10000][100], b[1000];

    scanf("%d", &t);
    getchar();


    while(t--)
    {
        scanf("%d", &d);
        getchar();

        for(i=0; i<d; i++)
        gets(s[i]);

    for(i=0; i<t; i++)
    {
        for(j=i+1; j<t; j++)
        {
            for(k=0; k<strlen(s[i]); k++)
            {
                b[k]=s[j][k];
            }
            b[k]='\0';

            if(!strcmp(s[i],b))
            {
                f=1;
                break;
            }

        }

        if(f)
            break;
    }

    if(f)
        printf("YES\n");
    else
        printf("NO\n");
    }


    return 0;
}

