#include<cstdio>

void swaP(int* x, int* y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}

int main()
{
    int t,n, a[1000];
    int i,j,s;

    scanf("%d", &t);

    while(t--)
    {
        scanf("%d", &n);
        s=0;
        for(i=0; i<n; i++)
            scanf("%d", &a[i]);

        for(i=0; i<n; i++)
        {
            for(j=i+1; j<n; j++)
            {
                if(a[i]>a[j])
                {
                    swaP(&a[i], &a[j]);
                    s++;
                }
            }
        }

        printf("Optimal train swapping takes %d swaps.\n",s);

    }



    return 0;
}
