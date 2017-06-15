#include<cstdio>
#include<iostream>
#include<map>
#include<cstring>
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
    int m,n;

    map <string,string> k;

    string x,y;

    scanf("%d %d", &m, &n);

    while(m--)
    {
        cin>>x;
        getchar();
        getline(cin,y);
        k[x]=y;
    }

    getline(cin,x);

//    map <string,string>::iterator it;
//
//    for(it=k.begin(); it!=k.end(); it++)
//        cout<<it->second<<endl;

    for(int y=1; y<=n; y++)
    {
        printf("Case %d: ", y);
        bool flag=true;
        getline(cin,x);
        x=findExt(x);

        map <string,string>::iterator it;

        for(it=k.begin(); it!=k.end(); it++)
            {
                if(x==(it->first))
                {
                    cout<<it->second;
                    flag=false;
                    break;
                }
            }

        if(flag)
            printf("unknown");

        printf("\n");
    }

    return 0;
}
