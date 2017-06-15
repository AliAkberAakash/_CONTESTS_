#include<cstdio>

int main()
{
    int n,m,t,x,y;

    scanf("%d", &t);

    while(t--)
    {
        scanf("%d %d", &n, &m);

        while(m--)
            scanf("%d %d", &x, &y);

        if(n%2)
            printf("no\n");
        else
            printf("yes\n");
    }


    return 0;
}
