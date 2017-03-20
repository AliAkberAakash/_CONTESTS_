#include<cstdio>
#include<cstring>

int a[7];

int main()
{
    char s[100];

    gets(s);

    int i,l;

    l=strlen(s);

    for(i=0; i<l; i++)
    {
        if((s[i] == 'B')||(s[i]=='F')||(s[i]=='P')||(s[i]=='V'))
        {
            if(a[1]==0)
                a[1]++;
        }
        else if((s[i]=='C')||(s[i]=='G')||(s[i]=='J')||(s[i]='K')||(s[i]=='Q')||(s[i]=='X')||(s[i]=='S')||(s[i]=='Z'))
        {
            if(a[2]==0)
                a[2]++;
        }
        else if((s[i]=='D')||(s[i]=='T'))
        {
            if(a[3]==0)
                a[3]++;
        }
        else if(s[i]=='L')
        {
            if(a[4]==0)
                a[4]++;
        }
        else if((s[i]=='M')||(s[i]=='N'))
        {
            if(a[5]==0)
                a[5]++;
        }
        else if(s[i]=='R')
        {
            if(a[6]==0)
                a[6]++;
        }
        else continue;
    }

    printf("\n");

    for(i=1; i<7; i++)
        if(a[i])
            printf("%d", i);

    printf("\n");

    return 0;
}
