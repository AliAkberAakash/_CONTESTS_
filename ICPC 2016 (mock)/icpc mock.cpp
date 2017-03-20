#include <stdio.h>

int main()
{
    double  numbergula, boronumber=0.0, chhotonumber=0.0, res;
    int numberN, i;
    scanf("%d",&numberN);
    for(i=1; i<=numberN; i++)
    {
        scanf("%lf",&numbergula);

        if(i==1)
        {
            chhotonumber=numbergula;
            boronumber=numbergula;
        }

        if(numbergula>=boronumber)
            boronumber=numbergula;
        if(numbergula<=chhotonumber)
        chhotonumber=numbergula;

        res=boronumber/(1.0*chhotonumber);

        printf("Case %d: %.2lf\n", i, res);
    }
    return 0;
}
