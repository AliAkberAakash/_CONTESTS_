#include<cstdio>
#include<string>
#include<iostream>
#include<vector>
#include<map>

using namespace std;

struct paper
{
    string index;
    int am;
};

vector <string> v;

int notFound(string str)
{
    int k=1;
    for(int i=0; i<v.size(); i++)
    {
        if(v[i]==str)
        {
            k=0;
            break;
        }
    }

    if(k)
        v.push_back(str);

    return k;
}

bool big(string s)
{
    bool k=1;
    for(int i=0; i<s.length(); i++)
        if((s[i]>='a'&&s[i]<='z'))
        {
            k=0;
            break;
        }

    return k;
}


int main()
{
    string s,t;

    paper lin[10000];

    map<string,int> pp;

    while(1)
    {
        getline(cin,s);
        if(s=="0") break;
        else if(s=="1")
        {
            int k=0;
            map<string,int>::iterator it;

            for(it=pp.begin(); it!=pp.end(); it++)
            {
                lin[k].index = it->first;
                lin[k].am = it->second;

                k++;
            }

            for(int i=0; i<k-1; i++)
            {
                for(int j=i+1; j<k; j++)
                {
                    if(lin[i].am < lin[j].am)
                    {
                        paper temp=lin[i];
                        lin[i]=lin[j];
                        lin[j]=temp;
                    }
                }
            }

            for(int i=0; i<k; i++)
            {
                cout<<lin[i].index<<" "<<lin[i].am<<endl;
            }

            pp.clear();
            v.clear();
        }
        else
        {
            if(big(s))
                {
                    t=s;
                    pp[t]=0;
                }
            else
                {
                    if(notFound(s))
                    pp[t]++;

                }
        }

    }


    return 0;
}
