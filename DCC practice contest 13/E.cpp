#include<cstdio>
#include<string>
#include<cstring>
#include<string>
#include<iostream>
#include<map>

using namespace std;

int main()
{
    int n,c;
    string s,blank;

    map <string,int> treeSpecies;

    scanf("%d", &n);
    getchar();
    getchar();

    for(int i=0; i<n; i++)
    {
        c=0;
        //getline(cin,blank);
        while(1)
        {
            getline(cin,s);
            if(s.length()==0) break;
            treeSpecies[s]++;
            c++;
        }

        map <string,int>::iterator it;
        for(it=treeSpecies.begin(); it!=treeSpecies.end(); it++)
            {
                int t = it->second;

                double d=((t*1.0)/(c*1.0))*100;

                cout<<it->first;
                printf(" %0.4lf\n", d);
            }

            if(i<n-1)
            printf("\n");

            treeSpecies.clear();

    }

    return 0;
}
