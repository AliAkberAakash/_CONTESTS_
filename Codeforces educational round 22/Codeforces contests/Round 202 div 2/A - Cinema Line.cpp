#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,x;
    bool k=true;
    map <int,int> m;

    m[25]=0;
    m[50]=0;
    m[100]=0;

    scanf("%d", &n);

    for(int i=0; i<n&&k; i++)
    {
        scanf("%d", &x);
        if(x==25)
            m[x]++;
        else if(x==50)
        {
            if(m[25]>0)
            {
                m[50]++;
                m[25]--;
            }
            else
                k=false;
        }
        else
        {
            if(m[50]>0 && m[25]>0)
            {
                m[100]++;
                m[50]--;
                m[25]--;
            }
            else if(m[25]>=3)
            {
                m[100]++;
                m[25]-=3;
            }
            else
                k=false;
        }
    }

    if(k)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
