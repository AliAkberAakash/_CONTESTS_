#include<bits/stdc++.h>

using namespace std;

typedef long long int LLI;

int main()
{
    LLI b[100005];
    int n;

    scanf("%d", &n);

    for(int i=0; i<n; i++)
        scanf("%lld", &b[i]);
    sort(b,b+n);

    int c;
    LLI k;
    c=1;
    k=b[0];
    for(int i=1; i<n; i++)
        {
            if(b[i]>=k)
            {
                c++;
                k+=b[i];
            }
        }

    printf("%d\n", c);

    return 0;
}
