
#include<iostream>
#include<cstdio>

int main()
{
    using namespace std;

    long long int a,b,c,d,n,t;

    cin>>n;

    while(n--)
    {
        cin>> c;
        cin>> d;

        t=c+d;

        if((t/2)*2==t)
        {
            a=t/2;
            b=c-a;
            if(a<0||b<0)
                cout<<"impossible"<<endl;
            else
                cout<<a<<" "<<b<<endl;

        }
        else
            cout<<"impossible"<<endl;



    }

    return 0;
}

