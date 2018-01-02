#include<bits/stdc++.h>

using namespace std;

int main()
{
    map <int, int> m;
    vector <int> lis;

    int x,z=1;

    while(scanf("%d", &x)!=EOF)
    {
        m[x]++;
        if(m[x]==1)
        {
            lis.push_back(x);
        }
    }

    for(int i=0; i<lis.size(); i++)
        printf("%d %d\n", lis[i], m[lis[i]]);

    return 0;
}
