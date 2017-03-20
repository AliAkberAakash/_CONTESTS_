#include<stdio.h>

int main()
{
    int i,j,test,k,l, numberN, zone[100001], xval, yval,mere,way, var1, var2;


    scanf("%d", &test);

    for(i=1; i<=test; i++)
    {
        scanf("%d", &numberN);

        for(j=1; j<=numberN; j++)
            {
                scanf("%d", &zone[j]);
                if(zone[j]==0)
                    l=j;
            }
        for(j=0; j<numberN-1; j++)
            scanf("%d %d", &xval, &yval);


        way=0;
        var2=1;

        yoMan:

        var1=1;
        mere=0;
        k=0;
        for(j=var2; j<=numberN; j++)
        {

            if(zone[j]==1)
                mere++;

            if(zone[j]==0)
            {
                k++;

                if(k!=1)
                {
                    if(mere==2)
                        way++;
                    if(mere>2)
                    {
                        var2=var1;
                        break;
                    }
                }
                if(k==2)
                    var1=j;
            }


        }

        if(var2!=l)
            goto yoMan;


        printf("%d\n", way*2);


    }

    return 0;
}

