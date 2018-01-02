#include<bits/stdc++.h>
using namespace std;

bool prime[10001];
map <int,int> pos;
void SieveOfEratosthenes()
{
    int i,p,co;
    co=0;
    memset(prime, true, sizeof(prime));

    for (p=2; (p*p)<=10001; p++)
    {
        if (prime[p] == true)
        {
            for (i=p*2; i<=10001; i += p)
            {
                prime[i] = false;
            }
        }
    }

    co=1;
    for(int i=2; i<10001; i++)
    {
        if(prime[i])
        {
            pos[i]=co;
            co++;
        }

    }

}

int main()
{
    SieveOfEratosthenes();
    int test,n,x;

    scanf("%d", &test);

    for(int i=0; i<test; i++)
    {
        scanf("%d", &n);

        for(int j=0; j<n; j++)
        {
            scanf("%d", &x);
            if(x==-1)
                printf(".");
            else if(x==0)
                printf(" ");
            else
            {
                while(!prime[x])
                {
                    x--;
                }
                printf("%c", (pos[x]%26)+97);
            }

        }

        puts("");
    }

    return 0;
}
