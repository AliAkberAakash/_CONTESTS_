#include<stdio.h>

int main()
{
    int m1,m2,t,i,j,n,d,s[100000];

    scanf("%d", &t);

    while(t--)
    {
        scanf("%d", &n);

        for(i=0; i<n; i++)
            scanf("%d", &s[i]);

        m1=-150001;
        m2=150001;
        j=-1;

        for(i=0; i<n; i++)
        {
           if((s[i]!=s[n-1])&&(s[i]>m1))
            {
                m1=s[i];
                j=i;
            }

        }


        if(j==-1)
            printf("0\n");
        else
        {
            for(j=j+1; j<n; j++)
            {
                if(s[j]<m2)
                    m2=s[j];
            }
            printf("%d\n", m1-m2);
        }


    }

    return 0;

}
