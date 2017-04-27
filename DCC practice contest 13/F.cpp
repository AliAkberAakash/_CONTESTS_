#include<iostream>
#include<cstdio>
#include<map>
#include<string>
#include<cstring>

using namespace std;

int main()
{
    string s;
    map <string,int> marks;
    int n,q,m;

    cin>>n;

    while(n--)
    {
        cin>>q;

        switch(q)
        {
        case 1:
            cin>>s>>m;
            marks[s]+=m;
            break;
        case 2:
            cin>>s;
            marks.erase(s);
            break;
        case 3:
            cin>>s;
            cout<<marks[s]<<endl;
            break;
        default:
            break;
        }
    }
    return 0;
}
