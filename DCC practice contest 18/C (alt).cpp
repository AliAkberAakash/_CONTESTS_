#include<cstdio>
#include<iostream>
#include<cmath>
#define SIZE 1000001

using namespace std;

//typedef long long int LLD;

bool a[SIZE];

int NOD(int n)
{
    int c=0;

    for (int i=1; i<=sqrt(n); i++)
	{
		if (n%i==0)
		{
			if (n/i == i)
				c++;
			else
			{
				c+=2;
			}
		}
	}

	return c;

}

void sequence()
{
    int n,m;
    m=1;
    a[1]=1;
    for(int i=2; i<66000; i++)
    {
        n=m+NOD(m);
        if(n>=SIZE)
        {
            //printf("%lld\n", n);
                break;
        }
        a[n]=1;
        m=n;
    }
}

int main()
{
    int x,t,y,i,c;

    sequence();

    scanf("%d", &t);

    printf("%d\n", t);

    for(i=1; i<=t; i++)
    {
        c=0;
        scanf("%d %d", &x,&y);

        for(int j=x; j<=y; j++)
            if(a[j])
                c++;

        printf("Case %d: %d\n", i, c);
    }

    return 0;
}
