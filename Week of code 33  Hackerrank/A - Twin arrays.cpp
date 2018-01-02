#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,p1,p2;
    long long int m1,m2,s1,s2,a[100000],b[100000];

    m1=INT_MAX;
    m2=INT_MAX;

    scanf("%d", &n);

    for(int i=0; i<n; i++)
    {
        scanf("%lld", &a[i]);

        if(m1>a[i])
        {
            m1=a[i];
            p1=i;
        }
    }
    s1=INT_MAX;
    s2=INT_MAX;

    for(int i=0; i<n; i++)
    {
        scanf("%lld", &b[i]);
        if(m2>b[i])
        {
            m2=b[i];
            p2=i;
        }

        if(i!=p1)
        s1=min(s1,m1+b[i]);
    }

    for(int i=0; i<n; i++)
    {
        if(i!=p2)
        s2=min(s2,m2+a[i]);
    }

    long long int x=min(s1,s2);

    printf("%lld\n", x);


    return 0;
}
