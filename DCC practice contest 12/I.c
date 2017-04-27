#include<stdio.h>
#include<string.h>

int main()
{
    long long int T,k,i;


    scanf("%lld", &T);
    getchar();

    for(i=1; i<=T; i++)
    {
        scanf("%[^\n]", s);
        getchar();
        scanf("%[^\n]", t);
        getchar();

        k =  strcmp(t,s);
        //k= abs(k)-1;

        printf("Case %lld: %lld\n", i,k);
    }

    return 0;
}
