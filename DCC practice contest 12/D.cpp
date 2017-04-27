#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int stringDif(char* s1, char* s2, int n)
{
    int i,k=0;

    for(i=0; i<n; i++)
    {
        if(s1[i]!=s2[i])
            k++;
        if(k>1)
            break;
    }

    return k;
}

int main()
{
    int m,n,i,j;
    char s[1005][1005];
    char kk[1005];

    while(scanf("%d %d", &n, &m)!=EOF)
    {
        getchar();
        for(i=0; i<n; i++)
        {
            scanf("%s", s[i]);
            getchar();
        }

        strcpy(kk,s[1]);
        strcpy(s[1],s[n-1]);
        strcpy(s[n-1],kk);

        for(i=0; i<n-1; i++)
        {
            for(j=i+1; j<n-1; j++)
            {
                if(stringDif(s[i],s[j],m)==1)
                {
                    strcpy(kk,s[i+1]);
                    strcpy(s[i+1],s[j]);
                    strcpy(s[j],kk);
                }
            }
        }

        for(i=0; i<n; i++)
        {
            printf("%s\n", s[i]);
        }

    }

    return 0;
}
