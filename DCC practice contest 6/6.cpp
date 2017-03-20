#include<stdio.h>

int main()

{
    int m,n,i,j,s,t,p;

    bool q;

    scanf("%d", &t);

    for(i=1; i<=t; i++)
    {
        s=0;
        scanf("%d %d", &n, &m);


        q=true;

        for(j=1; j<=n; j++)
        {
            if(n%2!=0&&q)
            {
                s=s-m;
                p++;

                if(p==m)
                    q=false;
                else
                    q=true;

            }
            elseif()
            {

            }


        }

    }

    return 0;
}
