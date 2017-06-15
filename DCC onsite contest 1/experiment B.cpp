#include<iostream>
#include<cstdio>
#include<string>

using namespace std;

string findExt(string s)
{
    string z,m;

    for(int i=s.length()-1; i>=0; i--)
        {
            if(s[i]!='.')
            z.push_back(s[i]);
            else
                break;
        }
    for(int i=z.length()-1; i>=0; i--)
        {

            m.push_back(z[i]);
        }

        return m;
}

int main()
{
    int l=0;
    string k,z;

    cin>>k;



        cout<<findExt(k);


    return 0;
}
