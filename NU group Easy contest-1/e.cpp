#include<bits/stdc++.h>

using namespace std;

int main()
{
    int m,n,a,b;
    int money,amount;
    double single;



    while(1)
    {
        scanf("%d %d", &n, &m);

        if(!n && !m)
            break;

        single=1000;

        bool o=false;
        for(int i=0; i<n; i++)
        {
            scanf("%d %d", &a, &b);
            if(a<=m)
            {
                double x=(((float)b*1.0)/((float)a*1.0));
                if( x <single)
                {
                    single=x;
                    money=b;
                    amount=a;
                    o=true;
                }
                else if(x == single)
                {
                    if(a>amount)
                    {
                        single=x;
                        money=b;
                        amount=a;
                        o=true;
                    }
                }
            }
        }

        if(o)
            printf("Buy %d tickets for $%d\n", amount,money);
        else
            printf("No suitable tickets offered\n");
    }


    return 0;
}
