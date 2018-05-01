#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,x;

    scanf("%d %d", &n, &m);

    vector <int> grid[n];

    for(int i=0; i<m; i++)
    {
        scanf("%d", &x);

        grid[x-1].push_back(1);
    }

    int siz = INT_MAX;

    for(int i=0; i<n; i++)
    {
        if(grid[i].size()<siz)
            siz=grid[i].size();
    }

    printf("%d\n", siz);

    return 0;
}
