#include<cstdio>
#include<iostream>
#include<vector>
#include<cstring>
#define mx 10000

using namespace std;

void fwd(int a[],int m,int pos,int n);
void backTrack(int a[],int m,int pos, int n);

vector <int> tracks;
int lastPos;
int sum;

bool avl[mx];

void isPossible(int s[],int m,int k)
{
    int cd;
    memset(avl,0,sizeof(avl));
    avl[0]=true;
    for(int i=0; i<m; i++)
    {
        cd=s[i];
        for(int j=k; j>=0; j--)
            if(avl[j])
                avl[j+cd]=true;
    }
}


void fwd(int a[],int m,int pos,int n)
{
    int tracker=0;

    for(int i=pos; i<m; i++)
    {
        if(sum+a[i]<=n)
        {
            sum=sum+a[i];
            tracks.push_back(a[i]);
            lastPos++;
            tracker=i;
        }
    }
    if(sum!=n)
        backTrack(a,m,tracker,n);

}

void backTrack(int a[], int m, int pos,int n)
{
    sum-= tracks[lastPos-1];
    tracks.pop_back();
    lastPos--;
    if(pos+1>=m)
    {
        pos--;
        backTrack(a,m,pos,n);
    }
    else
        fwd(a,m,pos+1,n);
}


int main()
{
    int n,m,a[10000];

    while(scanf("%d %d", &n, &m)!=EOF)
    {
        lastPos=0;
        sum=0;
        for(int i=0; i<m; i++)
            scanf("%d", &a[i]);

        isPossible(a,m,n);

        while(avl[n]!=true)
            n--;
        fwd(a,m,0,n);

        for(int i=0; i<tracks.size(); i++)
            printf("%d ", tracks[i]);
        printf("sum:%d\n",n);

        tracks.clear();
    }

    return 0;
}

