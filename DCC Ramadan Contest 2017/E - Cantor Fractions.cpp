#include<cstdio>
#include<cstring>
#include<map>
#include<iostream>

using namespace std;

long long int flag[10000][10000];

map <long long int, pair <long long int,long long int> > memo;

bool valid(long long int i, long long int j)
{
    if(i<1 || j<1)
        return false;
    else
    {
        if(flag[i][j]==1)
            return false;
        return true;
    }
}

int main()
{
    long long int n,i,j,k;
    memset(flag,0,sizeof(flag));
    i=j=1;
    k=1;

    flag[i][j]=1;

    memo[k]=make_pair(i,j);
    while(k<10000000000000000)
    {
        if(i==1)
        {
            if(!valid(i,j-1))
            {
                j++;
                flag[i][j]=1;
                k++;
                memo[k]=make_pair(i,j);
                if(k==n) break;
                while(j!=1)
                {
                    i++;
                    j--;
                    flag[i][j]=1;
                    k++;
                    memo[k]=make_pair(i,j);
                    if(k==n) break;
                }
            }
        }
        else if(j==1)
        {
            if(!valid(i-1,j))
            {
                i++;
                flag[i][j]=1;
                k++;
                memo[k]=make_pair(i,j);
                if(k==n) break;
                while(i!=1)
                {
                    i--;
                    j++;
                    flag[i][j]=1;
                    k++;
                    memo[k]=make_pair(i,j);
                    if(k==n) break;
                }
            }
        }
    }

    while(scanf("%lld", &n)==1)
    {
        printf("%lld/%lld\n", memo[n].second, memo[n].first);
    }

    return  0;
}
