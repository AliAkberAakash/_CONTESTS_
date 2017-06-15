#include<cstdio>

int main()
{
    int t, a[1001], k,n;

    scanf("%d", &t);

    while(t--)
    {
        k=0;
        scanf("%d", &n);

        for(int i=0; i<n; i++)
            scanf("%d", &a[i]);

        for(int i=0; i<n; i++)
        {
            for(int j=i+1;  j<n; j++)
            {
                if(a[i]>a[j])
                {
                    int temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                    k++;
                }
            }
        }

        printf("Optimal train swapping takes %d swaps.\n", k);

    }


    return 0;
}
