#include<cstdio>
#include<cstring>
#include<cstdlib>

struct ss
{
    char name[100];
    int num;
}love[2005];

int length=0;

void Insert(char s[])
{
    int i,flag = 0;
    for(i=0; i<length; i++)
    {
        if(!strcmp(s,love[i].name))
        {
            love[i].num++;
            flag = 1;
            break;
        }
    }

    if(!flag)
    {
        strcpy(love[length].name, s);
        love[length].num++;
        length++;
    }

}

int main()
{
    for(int i=0; i<2005; i++)
        love[i].num=0;

    int i,j,n;
    char s[100];
    char* t= (char*) malloc(100);
    char* temp= (char*) malloc(100);

    while(scanf("%d", &n)==1)
    {
        getchar();
        while(n--)
        {
            scanf("%[^\n]", s);
            getchar();
            t=strtok(s," ");
            Insert(t);
        }

    for (i = 0; i < length - 1 ; i++)
    {
        for (j = i + 1; j < length; j++)
        {
            if (strcmp(love[i].name, love[j].name) > 0)
            {
                ss temp = love[i];
                love[i] = love[j];
                love[j] = temp;
            }
        }
    }

    for(i=0; i<length; i++)
        printf("%s %d\n", love[i].name, love[i].num);
    }

    return 0;
}
