#include<iostream>

using namespace std;

int xOr(int x, int y)
{
    if(x==y)
        return 1;
    return 0;
}

int And(int x, int y)
{
    if(x==1 && y==1)
        return 1;
    else return 0;
}

int Or(int x, int y)
{
    if(x==0 && y==0)
        return 0;
    else return 1;
}

int main()
{
    ios::sync_with_stdio(false);

    int a,b,c,d,p,q,r,z,s,x,y,f;

    cin>>a>>b>>c>>d;

    p=Or(a,b);
    q=xOr(c,d);
    r=And(b,c);
    s=Or(a,d);

    x=And(p,q);
    y=xOr(r,s);

    f=Or(x,y);
    cout<<f<<endl;

    return 0;
}
