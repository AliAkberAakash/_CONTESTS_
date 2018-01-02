#include<bits/stdc++.h>

using namespace std;

int main()
{
    int tst,no,x,nd,mediums;
    int arr[105][105];
    int visited[105];
    map <int,int> answers;

    while(scanf("%d", &tst))
    {

        memset(arr,0,sizeof(arr));
        memset(visited,0,sizeof(visited));

        mediums=0;


        for(int i=0; i<tst; i++)
        {
            scanf("%d", &nd);
            getchar();
            scanf("(%d)",&no);
            for(int j=0; j<no;  j++)
            {
                scanf("%d", &x);
                arr[nd][x]=1;
            }

        }

        for(int i=0; i<tst; i++)
        {
            for(int j=0; j<tst; j++)
            {
                if(arr[i][j]==1)
                {
                    bool c=true;
                    for(int k=0; k<tst&&c; k++)
                    {
                        if(arr[k][i]==1 && k!=j && !visited[k])
                        {
                            c=false;
                        }

                    }
                    if(c)
                    {
                        visited[i]=1;
                        answers[i]=j;
                        mediums++;
                    }

                }
            }
        }

        printf("%d mediums are at risk\n", mediums);

        map <int,int> :: iterator  it;

        for(it=answers.begin(); it!=answers.end(); it++)
            printf("%d - %d\n", it->first, it->second);
        puts("");
        answers.clear();
        getchar();
    }


    return 0;
}
