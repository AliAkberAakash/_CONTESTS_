#include<cstdio>
#include<cmath>

int main()
{
    int n;
    double x,y,z,r,ans;

    scanf("%d", &n);

    for(int i=1; i<=n; i++)
    {
        scanf("%lf %lf %lf %lf", &x, &y, &z, &r);

        ans=sqrt((r*x*x)/(r+1));

        printf("Case %d: %.8lf\n", i, ans);
    }

    return 0;
}
