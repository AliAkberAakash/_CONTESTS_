#include<cstdio>
#include<iostream>
#include<climits>

int main()
{
    int t;

    int n,maxi,index;

    long long int a[100001];

    scanf("%d", &t);

    while(t--)
    {
        maxi=INT_MIN;
        scanf("%d", &n);

        for(int i=0; i<n; i++)
        {
            scanf("%lld", &a[i]);
            if(maxi<a[i])
                index=i;
        }

        while(1)
        {

        }


    }


    return 0;
}
