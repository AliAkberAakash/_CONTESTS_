#include<cstdio>

int main()
{
    int n,i,s,a[55],k,m=0;

    while(scanf("%d", &n)!=EOF)
    {
        k=s=0;
        if(!n)
            break;

        for(i=0; i<n; i++)
            {
                scanf("%d", &a[i]);
                s+=a[i];
            }
        s=s/n;

        for(i=0; i<n; i++)
            {
                if(a[i]<s)
                    k+=(s-a[i]);
            }

        m++;
        printf("Set #%d\n", m);
        printf("The minimum number of moves is %d.\n\n", k);
    }



    return 0;
}
