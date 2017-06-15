#include<cstdio>
#include<iostream>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<vector>

using namespace std;
vector <int> a;

int   p[1000001]; //prime array
bool prie[1000001]; //
inline void seive()
{
    int   i,j,k;
    memset(prie,true,sizeof(prie));
    prie[0]=0;
    prie[1]=0;
    k=0;
    for(i=1;i*i<=1000001;i++)
    {
        if(prie[i])
        {
            p[k++]=i;
            for(j=i*i;j <=1000001;j+=i)
                prie[j]=false;
        }
    }
   for(i=1001;i<=1000001;i+=2)
   {
       if(prie[i])
            p[k++]=i;
   }
}

template <class T> inline T nod(T t)
{
    int   mult,count;
    int   i;
    mult=1;
    if(!t) return 0;
    for(i=0;p[i]*p[i]<=t;i++)
    {
        count=1;
        while(t%p[i]==0)
        {
            count++;
            t/=p[i];
        }
        mult*=count;
        if(t==1)
           break;
    }
    if(t!=1)
        return mult*2;
    return mult;
}


void sequence()
{
    int n,m;
    m=1;
    a.push_back(1);
    for(int i=2; i<66000; i++)
    {
        n=m+nod(m);
        if(n>=1000000)
        {
            //printf("%lld\n", n);
                break;
        }
        a.push_back(n);
        m=n;
    }
}

int main()
{
    int x,t,y,i,c;

    seive();
    sequence();

    scanf("%d", &t);

    //printf("%d\n", t);

    for(i=1; i<=t; i++)
    {
        c=0;
        scanf("%d %d", &x,&y);

        int lb = lower_bound(a.begin(), a.end(), x) - a.begin();
        int hb = upper_bound(a.begin() + x, a.end(), y) - a.begin();


        printf("Case %d: %d\n", i, hb-lb);
    }

    return 0;
}
