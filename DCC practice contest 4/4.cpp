#include<iostream>
#include<cmath>
#include<cstdio>


int main()
{
    using namespace std;

    int i,c,n,m,a[100000], d[100000];

    bool f1=false, f2=false;


    cin>>n;

    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }

    m=0;
    c=n-1;
    for(i=0; i<n-1; i++)
    {
        d[m]=abs(a[i+1]-a[i]);

        cout<<c<<" "<<d[m]<<endl;

        if(d[m]==c)
        f1=true;
        else
        {
            f1=false;
            break;
        }
        c--;
        m++;
    }

    if(f1)
        cout<<"Jolly"<<endl;
    else
        cout<<"Not jolly"<<endl;


    return 0;
}

