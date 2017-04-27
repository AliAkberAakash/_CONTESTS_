#include<iostream>
#include<map>
#include<string>

using namespace std;

map<string,string> exp;
map<string,int> pro;

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

void check_and_insert(string s, string t)
{
    bool k=true;
    map<string,string>::iterator it;
    for(it=exp.begin(); it!=exp.end(); it++)
        if(it->first==s)
        {
            string l=it->first;
            k=false;
            if(it->second!=t)
                exp[l]="bangla";
            break;
        }
    if(k)
        exp[s]=t;
}

int main()
{

    string s,t;

    int a[1000];

    while(1)
    {
        int o=0;
        getline(cin,s);

        if(s=="0")  break;
        else if(s=="1")
        {
            //Dlt();
            map<string,string>::iterator i;
            for(i=exp.begin(); i!=exp.end(); i++)
                {
                    if(i->second!="bangla")
                    pro[i->second]++;
                }
            map<string,int>::iterator x;
            for(x=pro.begin(); x!=pro.end(); x++)
                {
                    a[o]=x->second;
                    o++;
                }

            for(int i=0; i<o; i++)
            {
                for(int j=i+1; j<o; j++)
                {
                    if(a[i]<a[j])
                    {
                        int temp=a[i];
                        a[i]=a[j];
                        a[j]=temp;
                    }
                }
            }

            map<string,int>::iterator y;

            for(int i=0; i<o; i++)
            {
                for(y=pro.begin(); y!=pro.end(); y++)
                {
                    if(a[i]==y->second)
                    {
                        cout<<y->first<<" "<<y->second<<endl;
                        pro.erase(y);
                        break;
                    }
                }
            }


            exp.clear();
            pro.clear();
        }
        else
        {
            if(big(s))
            {
                //t.clear();
                t=s;
                pro[t]=0;
            }
            else
            {
                check_and_insert(s,t);
            }

        }

    }

    return 0;
}
