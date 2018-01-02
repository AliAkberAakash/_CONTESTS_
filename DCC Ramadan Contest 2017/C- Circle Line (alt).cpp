#include<bits/stdc++.h>
#define inf  999999

using namespace std;

int minNode(int v[], bool visited[], int n)
{
    int Min=INT_MAX;
    int node=0;
    for(int i=1; i<=n; i++)
    {
        if(!visited[i])
        {
            if(v[i]<Min && v[i]>=0)
            {
            	Min=v[i];
            	node = i;
            }
        }
    }
    //printf("minNode = %d\n",node);
    return node;
}

int main()
{
    int n,x,s,t;
    int a[105][105];
    bool visited[105];
    int v[105];

    memset(a,0,sizeof(a));
    memset(visited,0,sizeof(visited));
    memset(v,-1,sizeof(v));

    scanf("%d", &n);

    for(int i=1; i<=n; i++)
    {
        scanf("%d", &x);
        if(i==n)
        {
            a[1][n]=x;
            a[n][1]=x;
        }

        else
        {
            a[i][i+1]=x;
            a[i+1][i]=x;
        }


    }

    scanf("%d %d", &s, &t);

    v[s]=0;

    int flag=0,currentNode=minNode(v,visited,n);

    while(flag<n)
        {
            for(int i=1; i<=n; i++)
            {
                if(a[currentNode][i]>0)
                {
                	if(v[i]<0)
            			v[i] = v[currentNode]+a[currentNode][i];
            		else
                    	v[i]=min(v[currentNode]+a[currentNode][i], v[i]);
                }

            }
            visited[currentNode]=true;
            flag++;
            currentNode=minNode(v,visited,n);
        }

    printf("%d\n", v[t]);


    return 0;
}
