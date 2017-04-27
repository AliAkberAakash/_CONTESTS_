#include<cstdio>
#include<climits>

int length(int a[],int n)
{
    int k=0;
    for(int i=0; i<n; i++)
        if(a[i]>0)
        k++;

    return k;
}

int cut(int a[], int m, int n)
{
    int k=INT_MAX;
    for(int i=0; i<n; i++)
    {
        if(a[i]>0)
        {
            a[i]-=m;
            if(a[i]<0)
                a[i]=0;
            if((a[i]!=0)&&(a[i]<k))
            {
                k=a[i];
            }
        }

    }

    return k;
}

int main()
{
    int n,a[10000],d,m;

    while(scanf("%d", &n)!=EOF)
    {
        scanf("%d", &a[0]);
        m=a[0];

        for(int i=1; i<n; i++)
            {
                scanf("%d", &a[i]);
                if(a[i]<m)
                    m=a[i];
            }

        d = length(a,n);
        while(d)
        {
            printf("%d\n", d);
            m = cut(a,m,n);
            d = length(a,n);
        }

    }

    return 0;
}
