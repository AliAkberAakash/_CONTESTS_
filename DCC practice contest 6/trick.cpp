#include<stdio.h>

int main()
{
    int a,b,i,j,c;

    scanf("%d %d",&a, &b);

    i=a;
    j=b;
    while(1)
    {


        a--;
        b--;

        if(a&&(!b))
            {
                printf("%d is the maximum\n", i);
                break;
            }
        else if(b&&(!a))
            {
                printf("%d is the maximum\n", j);
                break;
            }
        else if((!a)&&(!b))
        {
            printf("They are equal.\n");
            break;
        }
    }

    return 0;
}
