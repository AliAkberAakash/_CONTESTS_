#include<stdio.h>
#include<queue>
#include<string.h>
#include<vector>

using namespace std;

//int adj[40000][40000];

vector <int> adj1[40001];
vector <long long int> adj2[40001];
int lengths[400001];

int bfs(long long int c, int n){
    queue<int>nodes;
    int visited[40010];
    memset(visited, 0, sizeof(visited));
    nodes.push(1);
    visited[1]=1;
    int counter=0;
    int z;

    while(!nodes.empty()){
        z=nodes.front();
        int length = adj1[z].size();
        nodes.pop();
        for(int i=0; i<lengths[z]; i++)
        {
            if(visited[adj1[z][i]]==0 && adj2[z][i]>=c)
            {
                //printf("%d-->%d=%d\n",z,adj1[z][i],adj2[z][i]);
                nodes.push(adj1[z][i]);
                counter++;
                visited[adj1[z][i]]=1;
            }
        }
    }
    return counter;
}

int main(){

    int n,e, t,u, v,q;
    long long int c, w;

    scanf("%d",&t);
    for(int i=1; i<=t; i++){
        scanf("%d %d",&n, &e);
        for(int j=1; j<=e; j++){
            scanf("%d %d %lld", &u, &v ,&w);

            adj1[u].push_back(v);
            adj1[v].push_back(u);
            adj2[u].push_back(w);
            adj2[v].push_back(w);

        }
        for(int i=1;i<=n;i++){
            lengths[i]=adj1[i].size();
        }
        scanf("%d",&q);
        for(int j=1;j<=q;j++){
            scanf("%lld",&c);
            if(j==1){
                printf("Case %d:\n",i);
            }
            int x=bfs(c,n);
            printf("%d\n",x);
        }
        for(int i=0; i<40001; i++)
        {
            adj1[i].clear();
            adj2[i].clear();
        }
    }
}

