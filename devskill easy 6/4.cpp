#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
    long long int t,n,i,s1,s2,s3,ans;

    scanf("%lld", &t);

    while(t--)
    {
        s1=0; s2=0;
        scanf("%lld", &n);

        for(i=1; i<=n; i++)
        {
            s1=s1+(i*i);
            s2=s2+i;
        }

        s3=s2*s2;
        ans=s1-s3;

        if(ans<0)
            printf("%lld\n", -ans);
        else
            printf("%lld\n", ans);
    }

    return 0;
}

