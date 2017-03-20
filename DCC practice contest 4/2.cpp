#include<iostream>
#include<cstdio>

int main()
{
    using namespace std;

    long long int n, k, i, m, o;

    long long int a[10000], b[10000];

   cin >> n;

   cin >> k;

    m=0;
    o=0;
    for(i=1; i<=n; i++)
    {
        if(i%2==1)
            {
                a[m]=i;
                m++;
            }
        else
            {
                b[o]=i;
                o++;
            }
    }

    cout<<m<<endl;

    if(k>m)
        cout<<b[k-m-1]<<endl;
    else
        cout<<a[k-1]<< endl;




    return 0;
}

