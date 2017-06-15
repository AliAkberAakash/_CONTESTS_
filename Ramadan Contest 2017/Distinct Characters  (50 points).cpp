/*
* Solved by: Ali AKber Aakash
* Email: cedward318@gmail.com or ali852609@gmail.com
*/

#include<cstdio>
#include<iostream>
#include<string>

using namespace std;

string k;

bool found(char c)
{
    bool l=true;
    for(int i=0; i<k.size()&&l; i++)
        if(k[i]==c)
            l=false;

    return l;
}

int main()
{
    string s;
    int q,n;

    getline(cin,s);

    scanf("%d", &q);

    for(int j=0; j<q; j++)
    {
        scanf("%d", &n);

        int l=0;

        for(int i=0; i<n; i++)
        {
            if(found(s[i]))
                {
                    l++;
                    k.push_back(s[i]);
                }
        }

        k.clear();

        printf("%d\n", l);
    }

    return 0;
}
