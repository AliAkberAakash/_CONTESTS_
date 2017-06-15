#include<cstdio>
#include<cstdlib>
#include<iostream>
#include<string>
#include<cstring>

using namespace std;

int memo[10000];

bool check_duplicate(int x[])
{
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<4; j++)
        {
            if((x[i]==x[j])&&(i!=j))
                return false;
        }
    }

    return true;
}

void i_to_arr(int n, int a[])
{
    int b,i=0;

    while(n>0)
    {
        a[i++]=n%10;
        n=n/10;
    }

    int j=0;
    for(i=3; i>=2; i--)
    {
        b=a[j];
        a[j]=a[i];
        a[i]=b;

        j++;
    }
}

int main()
{
    int n,a[5];

    while(scanf("%d", &n)==1)
    {
        n++;

        if(memo[n]!=0)
            printf("%d\n", n);

        else
        {
            i_to_arr(n,a);

        while(!check_duplicate(a))
        {
            n++;
            i_to_arr(n,a);
        }

        memo[n]=1;

        printf("%d\n", n);
        }
    }

    return 0;
}
