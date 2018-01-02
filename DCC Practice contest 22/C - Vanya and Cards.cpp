#include<bits/stdc++.h>

using namespace std;

int ab(int x)
{
    if(x<0)
        return -x;
    return x;
}

int main()
{
    int n,x,sum,m;

    scanf("%d %d", &n, &x);

    sum=0;
    for(int i=0; i<n; i++)
    {
        scanf("%d", &m);
        sum+=m;
    }
    int ans;
    ans=ab(sum)/x;

    if(ab(sum)%x > 0)
        ans++;

    printf("%d\n", ans);

    return 0;
}
