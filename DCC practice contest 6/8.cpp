#include<stdio.h>
#include<string.h>

int main()
{
    int i,j,k,l,m,n,t,o;

    double s;

    char a[100][10];

    char b[10000];

    scanf("%d", t);

    while(t--)
    {
        s=0;
        scanf("%d", &n);

        for(i=0; i<n; i++)
        {
            for(j=0; j<2; j++)
            {
                scanf("%d", &a[i][j]);
            }
            scanf("%d", &a[i][j]);
            getchar();
        }

        scanf("%d", &o);

        for(i=0; i<o; i++)
        {
            gets(b);

            for(j=0; j<strlen(b); j++)
            {
                for(k=0; k<n; k++)
                {
                    if(b[i]==a[k][0])
                    s=s+a[k][1]-48;

                    else
                        s=s+0;

                }
            }
        }


    }

    s=s/100.0;

    printf("%.02lf$\n", s);

    return 0;
}

