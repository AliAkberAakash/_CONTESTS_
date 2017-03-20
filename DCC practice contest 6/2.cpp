#include<stdio.h>
#include<string.h>

int main()
{
    char s[100000];
    int i,j;

    while(gets(s))
    {
        for(i=0; i<strlen(s); i++)
        {
            if(s[i]>=65&&s[i]<=90)
                printf("%c", (char) (s[i]+32));
            else
                printf("%c", s[i]);
        }

        printf("\n");
    }

    return 0;
}
