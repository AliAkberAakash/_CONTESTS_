#include<cstdio>
#include<string>
#include<vector>
#include<iostream>

using namespace std;

vector <long long int> subStract(string a, string b)
{
    int  i,l;
    long long int carry=0;

    vector <long long int> v;

    l=a.length()-1;

    for(i=l; i>=0; i--)
    {
        if(b[i]>=a[i])
        {
            v.push_back((long long int)b[i]-((long long int)a[i]+carry));
            carry = 0;
        }
        else
        {
            v.push_back(((long long int)b[i]+26)-((long long int)a[i]+carry));
            carry=1;
        }
    }

    return v;
}

long long int calculate(vector <long long int> v)
{
    int i,t;

    long long int k=0,t1=1;

    t=v.size();

    for(i=0; i<t; i++)
    {
        k+=(v[i]*t1)%1000000007;
        t1=(t1*26)%1000000007;
    }

    return k;
}

int main()
{
    int i,t;

    long long int r;

    scanf("%d", &t);

    for(int i=1; i<=t; i++)
    {
        string a,b;

    cin>>a>>b;

    vector <long long int> v;

    v = subStract(a,b);
    r = calculate(v)-1;

    printf("Case %d: %lld\n", i, r);

    }

    return 0;
}
