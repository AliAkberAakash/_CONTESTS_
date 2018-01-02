#include<bits/stdc++.h>

using namespace std;

typedef pair<int,int> PII;

bool cmp(PII A,PII B)
{
    return A.second*B.first > A.first*B.second;
}

void FRknapsack(int w)
{
    int ans=0;

    for(int i=0; i<n; i++)
    {
        int z=min(w,v[i].first);
        w-=z;
        ans+=z*v[i].second;
    }
}

int main()
{
    int t,n,m,x,y;
    vector<PII> v;
    PII collect;

    for(int i=0; i<t; i++)
    {
        scanf("%d %d", &n, &m);
        for(int j=0; j<n; j++)
        {
            scanf("%d %d", &x,&y);
            collect.first=x;
            collect.second=y;
            v.push_back(collect);
        }
    }

    sort(v.begin(), v.end(), cmp);

    FRknapsack(m);

    return 0;
}
