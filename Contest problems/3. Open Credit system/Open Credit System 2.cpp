#include<stdio.h>

int main()
{
    int tc,n,s[100000], max,i,d;

    scanf("%d", &tc);

    while(tc--)
    {
        scanf("%d", &n);

        for(i=0; i<n; i++)
            scanf("%d", &s[i]);

        max=-1500001;
        d=-15000001;

        for(i=0; i<n-1; i++)
        {
            if(s[i]>max)
                max=s[i];
            if(max-s[i+1]>d)
                d=max-s[i+1];
        }

        printf("%d\n",d);

    }

    return 0;
}
