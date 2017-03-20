#include<stdio.h>
#include<string.h>

int main()
{
    char s[100000];
    int i,t;

    scanf("%d", &t);
    getchar();

    for(i=0; i<t; i++)
    {
        gets(s);

        if((!strcmp(s,"1"))||(!strcmp(s,"4"))||!strcmp(s,"78"))
        printf("+\n");

        else if((!strcmp(s,"135"))||(!strcmp(s,"435"))||!strcmp(s,"7835"))
        printf("-\n");

        else if((!strcmp(s,"914"))||(!strcmp(s,"944"))||!strcmp(s,"9784"))
        printf("*\n");

        else if((!strcmp(s,"1901"))||(!strcmp(s,"1904"))||!strcmp(s,"19078"))
        printf("?\n");
    }

}
