#include<cstdio>
//#define go 1000000007

long long int facto(long long int x, long long int y)
{
    long long int l=1,k=0,j=0;

//    while(x>0)
//        {
//            j=x-k;
//            l=(l*j)%go;
//            k++;
//            if(k>=y)
//                break;
//        }

    for(int i=x; i>(x-y); i--)
        l=(l*i)%1000000007;

    return l;
}

int main()
{
    int t;
    long long  x,y;

    scanf("%d", &t);

    for(int i=1; i<=t; i++)
    {
        scanf("%lld %lld", &x, &y);
        printf("Case %d: %lld\n", i,facto(x,y));
    }

    return 0;
}
