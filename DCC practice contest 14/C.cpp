#include<cstdio>
#include<iostream>
#include<vector>
#include<algorithm>
#define SIZE 100000

using namespace std;

vector <int> a;

int main()
{
    int t,p,q,x,y,s,k,ub,lb;

    scanf("%d", &t);

    for(int i=1; i<=t; i++)
    {
        printf("Case %d:\n", i);
        scanf("%d %d", &p, &q);

        while(p--)
        {
            scanf("%d", &s);
            a.push_back(s);
        }

        //vector<int> :: iterator lb,ub;

        while(q--)
        {
            k=0;
            scanf("%d %d", &x, &y);

            lb=lower_bound(a.begin(), a.end(), x)-a.begin();
            ub=upper_bound(a.begin(), a.end(), y)-a.begin();

            k=ub-lb;

            printf("%d\n", k);
        }

        a.clear();
    }


    return 0;
}
