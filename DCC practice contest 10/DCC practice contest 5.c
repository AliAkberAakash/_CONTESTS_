#include<stdio.h>
#include<string.h>


int main()
{
    char s[100000];
    char b[100000];
    int i,j;

    while(gets(s))
    {
        j=0;
        for(i=0; i<strlen(s); i++)
        {
            if(s[i]==32)
            {
                b[j]='\0';
                printf("%s ", strrev(b));
                j=0;
            }
            else if(i==strlen(s)-1)
            {
                b[j]=s[i];
                b[j+1]='\0';
                printf("%s", strrev(b));
                j=0;
            }
            else
            {
                b[j]=s[i];
                j++;
            }
        }

        printf("\n");
    }

    return 0;
}
