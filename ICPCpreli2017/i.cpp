#include<bits/stdc++.h>
#include<string.h>
#include<string>

using namespace std;

int v[11][11]={0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,0,2,4,8,7,5,10,2,4,8,7,0,9,9,9,9,9,9,9,9,9,9,0,4,7,10,4,7,10,4,7,10,4,0,5,7,8,4,2,10,5,7,8,4,0,9,9,9,9,9,9,9,9,9,9,0,7,4,10,7,4,10,7,4,10,7,0,8,10,8,10,8,10,8,10,8,10,0,9,9,9,9,9,9,9,9,9,9};

int mod(string x, long long int sd)
{
    long long int c=0;
    while(x.empty()==0)
    {
        c*=10;
        c+=(x[0]-'0');
        x.erase(x.begin());
        c%=sd;
    }
    return c;
}

int nq(string x)
{
    int r;
    long long int q=0, t1;
    while(x.empty()==0)
    {
        q+=(x[0]-'0');
        x.erase(x.begin());
    }
    while(q>=10)
    {
        t1=0;
        while(q!=0)
        {
            t1+=(q%10);
            q/=10;
        }
        q=t1;
    }
    r=(int)q;
    return r;
}

int main()
{
    int t,T;
    scanf("%d", &T);
    for(t=1;t<=T;t++)
    {

        string a, b;
        cin>>a>>b;

        if(a.compare("0")==0) printf("Case %d: 0\n",t);
        else if(b.compare("0")==0) printf("Case %d: 1\n",t);
        else if(a.compare("3")==0&&b.compare("1")==0) printf("Case %d: 3\n",t);
        else if(a.compare("6")==0&&b.compare("1")==0) printf("Case %d: 6\n",t);
        else printf("Case %d: %d\n",t, v[mod(a,10)][nq(b)]);

    }
    return 0;
}
