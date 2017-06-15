#include<cstdio>

int main()
{
    int k,m,n,x,y;

    while(1)
    {
        scanf("%d", &k);

        if(!k)  break;

        scanf("%d %d", &m, &n);

        for(int i=0; i<k; i++)
        {
            scanf("%d %d", &x, &y);

            if(x==m||y==n)
                printf("divisa");
            else if(x>m&&y>n)
                printf("NE");
            else if(x<m&& y>n)
                printf("NO");
            else if(x<m&&y<n)
                printf("SO");
            else if(x>m&&y<n)
                printf("SE");

            printf("\n");

        }
    }



    return 0;
}
