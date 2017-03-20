/*
Problem B
Solved by: Liverwort
Date:3/6/12
*/

#include<stdio.h>
#include<string.h>

int main()
{
    char a[100];
    int i,tc;

    scanf("%d", &tc);

    while(tc--)
    {
        scanf("%s", a);

        if(strlen(a)==5)
            printf("3\n");
        else
        {
            for(i=0; i<3; i++)
            {
                if(a[i]=='n'||a[i]=='e')
                    {
                        printf("1\n");
                        break;
                    }
                else if(a[i]=='t'||a[i]=='w')
                   {
                       printf("2\n");
                       break;
                   }
                else continue;

            }
        }


    }

    return 0;

}
