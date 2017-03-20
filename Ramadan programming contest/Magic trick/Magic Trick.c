#include<stdio.h>
#include<string.h>

int main()
{
    int i,j,n,r,count,q;
    char s[100];

    scanf("%d", &n);
        q=0;
        for(i=0; i<n; i++)
        {
            count=0;

            scanf("%s %d", &s, &r);



            if(!strcmp(s,"ADD"))
                count=0;

            else if(!strcmp(s,"SUBTRACT"))
            {
                for(j=1; j<=100; j++)
                {
                    if((j-r)<0)
                        count++;
                }
            }

            else if(!strcmp(s,"DIVIDE"))
            {
                for(j=1; j<=100; j++)
                {
                    if(j!=(j/r)*r)
                        count++;
                }
            }

            else if(!strcmp(s,"MULTIPLY"))
                count=0;

            q=q+count;

        }

        printf("%d\n", q);

    return 0;
}
