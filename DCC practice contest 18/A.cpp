#include<cstdio>
#include<iostream>
#include<cmath>

using namespace std;

typedef long long int LLD;

LLD divSum(LLD n)
{
    int res=0;
	for (LLD i=1; i<=sqrt(n); i++)
	{
		if (n%i==0)
		{
			if (n/i == i)
				res+=i;
			else
			{
				res+=i+(n/i);
			}
		}
	}
    return res-n;
}

int main()
{
    LLD t,x;

    scanf("%lld", &t);

    while(t--)
    {
        scanf("%lld", &x);
        printf("%lld\n", divSum(x));
    }


    return 0;
}
