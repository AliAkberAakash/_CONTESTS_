#include<cstdio>
#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int n,s;
    int a[1001];
    vector <int> v;

    while(1)
    {
        s=0;
        scanf("%d", &n);
        if(!n)  break;

        for(int i=0; i<n; i++)
        {
            scanf("%d", &a[i]);
            s+=a[i];
            if(a[i])
                v.push_back(a[i]);
        }
        if(s>0)
        {
            for(int i=0; i<v.size(); i++)
            {
                    if(i)
                        printf(" ");
                    printf("%d", v[i]);

            }
            printf("\n");

            v.clear();
        }
        else
        printf("0\n");


    }


    return 0;
}
