#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,n,ans,a[100];

    scanf("%d", &t);

    for(int i=0; i<t; i++)
    {
        scanf("%d", &n);
        ans=0;
        for(int i=0; i<n; i++)
            scanf("%d", &a[i]);

        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                if(a[i]>a[j])
                {
                    swap(a[i],a[j]);
                    ans++;
                }
            }
        }

        printf("Optimal train swapping takes %d swaps.\n", ans);

    }

    return 0;
}
