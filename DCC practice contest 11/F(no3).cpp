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
}per[10000];


int main()
{
    int n,in,i,j,k, num;
    char ch;
    scanf("%d", &n);
    getchar();
    getchar();

    while(n--)
    {
        i=0;

        do{
            scanf(" %d%c", &num, &ch);
            per[i++].index=num;
        }while(ch!='\n');
        for(j=0; j<i; j++)
            cin >> per[j].str;

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
            getchar();
        }

    }

    return 0;
}
