#include<cstdio>
#include<cstring>

int main()
{
    int a[10000];
    int n,i,j,d,k;

    while(scanf("%d", &n)==1)
    {
        k=0;
        memset(a,0,sizeof(int)*10000);

        while(n--)
        {
            scanf("%d", &d);
            a[d]++;
        }

        for(i=0; i<1000; i++)
        {
            if(a[i])
            {
                k++;
                if(k!=1)
                    printf(" ");
                for(j=0; j<a[i]; j++)
                    printf("%d", i);
            }
        }

        printf("\n");
    }

    return 0;
}
