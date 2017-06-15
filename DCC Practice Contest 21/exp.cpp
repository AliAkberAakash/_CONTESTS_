#include<cstdio>
#include<iostream>
#include<vector>

using namespace std;


int main()
{
    int n;
    int m;
    while(scanf("%d %d",&n,&m)==2)
    {
        std::vector<int> Graph[n+1];
        if(!n && !m)
            break;
        else
        {
            int First;
            int Second;

            for(int test=0;test<m;test++)
            {
                scanf("%d %d",&First,&Second);
                Graph[First].push_back(Second);
            }

            for(int i=1; i<=n; i++)
            {
                printf("%d-> ", i);
                for(int j=0; j<Graph[i].size(); j++)
                {
                    printf("%d ", Graph[i][j]);
                }
                printf("\n");
            }
        }
        for(int Index=0;Index<n+1;Index++)
            Graph[Index].clear();
    }

    return 0;
}
