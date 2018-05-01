#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, m,x,y;

    scanf("%d %d", &n, &m);

    int a[n+1];
    memset(a,0,sizeof(a));

    while(m--)
    {
        scanf("%d %d", &x, &y);
        a[x]++;
        a[y]++;
    }

    for(int i=1; i<=n; i++)
        printf("%d\n", a[i]);

    return 0;
}
