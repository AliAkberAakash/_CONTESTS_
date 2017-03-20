#include<cstdio>
#include<iostream>

class path
{
public:
    long long int path1,path2,gold;
};

int main()
{
    long long int t,n,m,i,j,k,u,v,co,pr,p,q;

    path ob1[900000];

    scanf("%lld", &t);

    for(i=0; i<t; i++)
    {
        co=0;
        pr=0;

        scanf("%lld %lld", &n,&m);

        for(j=0; j<n; j++)
            scanf("%lld", &ob1[j].gold);

        for(j=0; j<m; j++)
            scanf("%lld %lld", &ob1[j].path1, &ob1[j].path2);

        scanf("%lld %lld", &u,&v);

        p=u; q=v;

        while(p!=q)
        {
            for(j=0; j<n; j++);



        }
    }


    return 0;
}
