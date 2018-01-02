#include<bits/stdc++.h>

using namespace std;

int ab(int x)
{
    if(x<0)
        return -x;
    return x;
}

int main()
{
    int M,H,ans;
    double angle;

    scanf("%d:%d", &M, &H);
    while(M || H)
    {
        ans=ab((M*60)-(H*11));
        angle=0.5*ans;
        if(angle>180.0)
            angle=360.0-angle;
        printf("%.3lf\n", angle);
        scanf("%d:%d", &M, &H);
    }


    return 0;
}
