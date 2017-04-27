#include<cstdio>
#include<algorithm>

using namespace std;

int main()
{
    int n,c,x,a[101],m;

    m=0;

    scanf("%d %d", &n, &c);

    for(int i=0; i<n; i++)
        {
            scanf("%d", &a[i]);
            if(i>0)
            {
                x=a[i-1]-a[i]-c;
                if(x>=0)
                    m=max(m,x);
            }
        }

        printf("%d\n", m);

    return 0;
}
