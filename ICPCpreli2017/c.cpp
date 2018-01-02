#include<bits/stdc++.h>
#include<string.h>

using namespace std;

int main()
{

int test;

scanf("%d", &test);

for(int t=1; t<=test; t++)
{
    int rc, a[105][105], r=0;

    scanf("%d", &rc);

    for(int j=0; j<rc; j++)
    {
        for(int k=0; k<rc; k++)
        {
            scanf("%d", &a[j][k]);
        }
    }

    int f, cf[12];
    for(int j=0; j<rc-1; j++) for(int k=0; k<rc-4; k++)
    {
        f=0;
        memset(cf,0,sizeof(cf));
        for(int t1=j;t1<=j+1;t1++) for(int t2=k;t2<=k+4;t2++)
        {
            if(cf[a[t1][t2]]==0) cf[a[t1][t2]]=1;
            else
            {
                f=1;
                break;
            }
        }
        if(f==0) r++;
    }
    for(int j=0; j<rc-4; j++) for(int k=0; k<rc-1; k++)
    {
        f=0;
        memset(cf,0,sizeof(cf));
        for(int t1=j;t1<=j+4;t1++) for(int t2=k;t2<=k+1;t2++)
        {
            if(cf[a[t1][t2]]==0) cf[a[t1][t2]]=1;
            else
            {
                f=1;
                break;
            }
        }
        if(f==0) r++;
    }
    for(int j=0; j<rc; j++) for(int k=0; k<rc-9; k++)
    {
        f=0;
        memset(cf,0,sizeof(cf));
        for(int t2=k;t2<=k+9;t2++)
        {
            if(cf[a[j][t2]]==0) cf[a[j][t2]]=1;
            else
            {
                f=1;
                break;
            }
        }
        if(f==0) r++;
    }
    for(int j=0; j<rc-9; j++) for(int k=0; k<rc; k++)
    {
        f=0;
        memset(cf,0,sizeof(cf));
        for(int t1=j;t1<=j+9;t1++)
        {
            if(cf[a[t1][k]]==0) cf[a[t1][k]]=1;
            else
            {
                f=1;
                break;
            }
        }
        if(f==0) r++;
    }

    printf("Case %d: %d\n", t, r);
}

return 0;
}
