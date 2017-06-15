#include<cstdio>

bool canMove(int x, int y)
{
    if(x<=0 || y<=0)
        return 0;
    return 1;
}

int main()
{
    int a,b,r;

    bool p1,p2,i;

    scanf("%d %d %d",&a,&b,&r);

    p1=p2=1;

    i=1;

    r+=r;
    r*=r;

    a=a*b;

    while(1)
    {

        if(i)
        {
            printf("P1: %d\n", a);
            i=0;

            if(a-r>=0)
            {
                a-=r;
            }
            else
            {
                printf("Second\n");
                break;
            }
        }
        else
        {
            printf("P2: %d\n", a);
            i=1;

            if(a-r>=0)
            {
                a-=r;
            }
            else
            {
                printf("First\n");
                break;
            }
        }
    }

    return 0;
}
