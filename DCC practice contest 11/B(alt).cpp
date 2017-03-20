#include<cstdio>
#include<cstring>

int main()
{
    char s[20];
    int i,l;

    while(scanf("%s", s)!=EOF)
    {
        getchar();

        l=strlen(s);

        for(i=0; i<l; i++)
        {
                switch(s[i])
                {
                case 'B':
                case 'F':
                case 'P':
                case 'V':
                    if((s[i+1]!='B')&&(s[i+1]!='F')&&(s[i+1]!='P')&&(s[i+1]!='V'))
                    printf("1");
                    break;
                case 'C':
                case 'G':
                case 'J':
                case 'K':
                case 'Q':
                case 'S':
                case 'X':
                case 'Z':
                    if((s[i+1]!='C')&&(s[i+1]!='G')&&(s[i+1]!='J')&&(s[i+1]!='K')&&(s[i+1]!='Q')&&(s[i+1]!='S')&&(s[i+1]!='X')&&(s[i+1]!='Z'))
                    printf("2");
                    break;
                case 'D':
                case 'T':
                    if((s[i+1]!='D')&&(s[i+1]!='T'))
                    printf("3");
                    break;
                case 'L':
                    if(s[i+1]!='L')
                    printf("4");
                    break;
                case 'M':
                case 'N':
                    if((s[i+1]!='M')&&(s[i+1]!='N'))
                    printf("5");
                    break;
                case 'R':
                    if(s[i+1]!='R')
                    printf("6");
                    break;
                default:
                    break;

                }
        }
        printf("\n");
    }

    return 0;
}
