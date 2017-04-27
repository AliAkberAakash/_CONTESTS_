#include<cstdio>

int main()
{
    int a[10000];
    int x,n,i,j,carry,index;

    while(scanf("%d",&n)!=EOF)
    {
        a[0]=1;
        carry=0;
        index=1;

        for(i=1; i<=n; i++)
        {
        for(j=0; j<index; j++)
        {
            x=(a[j]*i) + carry;
            a[j] =  x%10;

            carry = x/10;
        }

        while(carry>0)
        {
            a[index++]=carry%10;
            carry=carry/10;
        }
    }

    printf("%d!\n",n);
    for(i=index-1; i>=0; i--)
        printf("%d",a[i]);
    printf("\n");
    }



    return 0;
}
