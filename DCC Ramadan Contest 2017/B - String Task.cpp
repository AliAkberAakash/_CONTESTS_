#include<bits/stdc++.h>

using namespace std;

bool vowel(char x)
{
    if(x=='a'||x=='A'||x=='e'||x=='E'||x=='i'||x=='I'||x=='o'||x=='O'||x=='u'||x=='U'||x=='y'||x=='Y' )
        return true;
    return false;
}

int main()
{
    string s,t;

    getline(cin,s);

    for(int i=0; i<s.length(); i++)
    {
        if(!vowel(s[i]))
        {
            t.push_back('.');
            t.push_back(tolower(s[i]));
        }
    }

    cout<<t<<endl;

    return 0;
}
