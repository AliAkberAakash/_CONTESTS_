#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s,t;

    vector<string> v;

    v[0]="1";
    v[1]="64";
    v[2]="85766121";
    v[3]="729";
    v[4]="4096";
    v[5]="15625";
    v[6]="46656";
    v[7]="117649";
    v[8]="262144";
    v[9]="531441";
    v[10]="1000000";
    v[11]="1771561";
    v[12]="2985984";
    v[13]="4826809";
    v[14]="7529536";
    v[15]="11390625";
    v[16]="16777216";
    v[17]="24137569";
    v[18]="34012224";
    v[19]="47045881";
    v[20]="64000000";

    t="0";

    while(1)
    {
        cin>>s;

        bool k=true;

        if(s==t)
            break;
        else
        {
            for(int i=0; i<v.size()&&k; i++)
                {
                    if(v[i]==s)
                    {
                        printf("Special\n");
                        k=false;
                    }
                }
            if(k)
                printf("Ordinary\n");
        }
    }

    return 0;
}
