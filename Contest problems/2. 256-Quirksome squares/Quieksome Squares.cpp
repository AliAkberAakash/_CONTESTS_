#include<stdio.h>

int main()
{
    int i,j,cs,x,a,b,p;

    while(scanf("%d", &cs)==1)
    {
        switch(cs)
        {
        case 2:
            x=9;
            p=10;
            break;
        case 4:
            x=99;
            p=100;
            break;
        case 6:
            x=999;
            p=1000;
            break;
        default:
            x=9999;
            p=10000;
        }

        for(i=0; i<=x; i++)
        {
            for(j=0; j<=x; j++)
            {
                a=(i+j)*(i+j);
                b=(i*p)+j;

                if((a==b)&&(cs==2))
                    printf("%02d\n", b);
                else if((a==b)&&(cs==4))
                    printf("%04d\n", b);
                else if((a==b)&&(cs==6))
                    printf("%06d\n", b);
                else if((a==b)&&(cs==8))
                    printf("%08d\n", b);
            }
        }


    }

    return 0;

}
