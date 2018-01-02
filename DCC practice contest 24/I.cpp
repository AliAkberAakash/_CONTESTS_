#include<bits/stdc++.h>

using namespace std;

int main()
{
    char s[35];

    while(scanf("%s", s)!=EOF)
    {
        int l=strlen(s);

        for(int i=0; i<l; i++)
        {
            switch(s[i])
            {
            case 'A':
            case 'B':
            case 'C':
                printf("2");
                break;
            case 'D':
            case 'E':
            case 'F':
                printf("3");
                break;

            case 'G':
            case 'H':
            case 'I':
                printf("4");
                break;
            case 'J':
            case 'K':
            case 'L':
                printf("5");
                break;
            case 'M':
            case 'N':
            case 'O':
                printf("6");
                break;

            case 'P':
            case 'Q':
            case 'R':
            case 'S':
                printf("7");
                break;

            case 'T':
            case 'U':
            case 'V':
                printf("8");
                break;

            case 'W':
            case 'X':
            case 'Y':
            case 'Z':
                printf("9");
                break;
            default:
                printf("%c", s[i]);

            }
        }

        puts("");
    }

    return 0;
}
