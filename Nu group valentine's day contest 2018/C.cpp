#include<bits/stdc++.h>

using namespace std;

int func(int i)
{
    if(i%2)
        return 0;
    return 1+func(i/2);
}

int main()
{
    int n,ans;
    scanf("%d", &n);

    int mx=0;

    for(int i=1; i<=n; i++)
    {
        int x=func(i);

        if(x>=mx)
        {
            mx=x;
            ans=i;
        }
    }

    printf("%d\n", ans);

    return 0;
}
