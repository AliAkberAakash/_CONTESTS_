#include<stdio.h>
#include<stdlib.h>

int main()
{
    int N,M,i,j,temp,k;
    int n[10000],a[100],b[100],c[100],d[100];

    while(scanf("%d", &N)==1)
    {

        k=1;


        for(i=1; i<=N; i++)
            scanf("%d", &n[i]);

        scanf("%d", &M);

        for(i=1; i<=N; i++)
        {
            for(j=i+1; j<=N; j++)
                if(n[i]+n[j]==M)
                {
                    a[k]=n[i];
                    b[k]=n[j];
                    k++;
                }
        }
        k--;

            for(i=1; i<=k; i++)
            {
                c[i]=abs(a[i]-b[i]);
                d[i]=c[i];
            }

        for(i=1; i<=k; i++)
        {
            for(j=1; j<=(k-i); j++)
                if(d[j]>d[j+1])
                {
                    temp=d[j];
                    d[j]=d[j+1];
                    d[j+1]=temp;
                }
        }

        for(i=1; i<=k; i++)
            {
                if(d[1]==c[i])
                   {
                      if(a[i]>b[i])
                      printf("Peter should buy books whose prices are %d and %d.\n", b[i],a[i]);
                      else
                      printf("Peter should buy books whose prices are %d and %d.\n", a[i],b[i]);
                   }
            }

        printf("\n");

    }

    return 0;
}
