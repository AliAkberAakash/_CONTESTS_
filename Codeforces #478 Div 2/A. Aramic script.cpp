/*
* Solution to Aramic script
* Solved by: Ali AKber Aakash
* Email: cedward318@gmail.com or ali852609@gmail.com
*/

#include<bits/stdc++.h>

using namespace std;

bool found(vector <string> v, string perm)
{
    for(int i=0; i<v.size(); i++)
        if(v[i]==perm)
            return true;
    return false;
}

int main()
{
    string word,perm;
    bool newWord;
    int n,ans, freq[27];

    vector <string> v;

    ans=0;

    scanf("%d", &n);

    memset(freq,0,sizeof(freq));

    for(int i=0; i<n; i++)
    {
        perm="x";
        memset(freq,0,sizeof(freq));
        cin>>word;

        for(int j=0; j<word.length(); j++)
        {
            freq[word[j]-97]++;
        }
        for(int j=0; j<26; j++)
        {
            if(freq[j])
                perm+=(char)j;
        }
        if(!found(v,perm))
            v.push_back(perm);
    }

    printf("%d\n", v.size());

    return 0;
}
