#include<cstdio>
#include<iostream>
#include<vector>

using namespace std;

int abs(int m)
{
    if(m<0)
        return -m;
    return m;
}

void find_Replace(int n, vector <int> &v)
{
    bool x=true;
    for(int i=0; i<v.size()&&x; i++)
    {
        if(abs(v[i])==abs(n))
            x=false;
    }
    if(x)
        v.push_back(abs(n));
}


int main()
{
    int c1,c2,x,y,m,n,center,add;
    vector <int> v;

    scanf("%d %d %d", &n, &c1, &c2);

    for(int i=0; i<n; i++)
    {
        scanf("%d %d", &x, &y);

        center=add=0;

        if(c1-x!=0)
        {
            m=(c2-y)/(c1-x);
            find_Replace(m,v);
        }
        else
        {
            if((c2-y)==0)
                center=1;
            else
                add=1;
        }

    }

    printf("%d\n", v.size()+center+add);

    return 0;
}
