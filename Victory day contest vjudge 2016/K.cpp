#include<stdio.h>
#include<string.h>

int main()
{
    int i,k;
    char s[100000];

    gets(s);

    k=1;

    for(i=0;i<strlen(s); i++)
    {
        if(s[i]==s[i+1])
        {
            k++;
        }
        else
        {
            printf("%c%d", s[i],k);
            k=1;
        }
    }

    return 0;
}
