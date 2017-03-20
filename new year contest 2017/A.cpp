#include<iostream>
#include<cstdio>

#define n 7

int main()
{
	long long int t,i,g,ans;

	scanf("%lld",  &t);

	for(i=0; i<t; i++)
	{
		scanf("%lld", &g);

		ans=(((2*n)+g)/2)-n;

		printf("Case %lld: %lld\n",i+1, ans);
	}

	return 0;
}
