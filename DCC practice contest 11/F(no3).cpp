#include<cstdio>
#include<string>
#include<iostream>
#include<sstream>
#include<cstdlib>

using namespace std;

struct permutation
{
    int index;
    string str;
}per[1000];


int main()
{
    int n,in,i,j,k;
    char* s = (char*) malloc(1000);

    scanf("%d", &n);
    getchar();

    while(n--)
    {
        getchar();

        i=0;

        fgets(s,1000,stdin);
        stringstream ss(s);
        while(ss>>s)
            per[i++].index=atoi(s);

                i=0;

        fgets(s,1000,stdin);
        stringstream ss2(s);
        while(ss2>>s)
            per[i++].str=s;

        for(j=0; j<i; j++)
        {
            for(k=j+1; k<i; k++)
            {
                if(per[j].index>per[k].index)
                {
                    permutation temp=per[j];
                    per[j]=per[k];
                    per[k]=temp;
                }
            }
        }

        for(j=0; j<i; j++)
            cout<<per[j].str<<endl;
        if(n)
        {
            printf("\n");
        }

    }

    free(s);

    return 0;
}
