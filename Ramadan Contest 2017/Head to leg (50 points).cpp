/*
* Solved by: Ali AKber Aakash
* Email: cedward318@gmail.com or ali852609@gmail.com
*/

#include<cstdio>

using namespace std;

typedef long long int L;

int main()
{
    L h,l;
    L hen;
    int t;

    scanf("%d", &t);

    for(int i=1; i<=t; i++)
    {
        scanf("%lld %lld", &h, &l);

        hen=0;

        while(1)
        {
            if(h>0)
            {
                if(l/h != 4)
                {
                    hen++;
                    h--;
                    l-=2;
                }
                else break;
            }
            else break;
        }

        printf("Case %d: %lld %lld\n", i, hen, h);
    }

    return 0;
}
