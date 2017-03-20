#include<cstdio>

int abs(int x)
{
    if(x<0)
        return -x;
    return x;
}


int main()
{
    int a,b[3000],i,m,n,k;

    while(scanf("%d", &n)!=EOF)
    {

    k=1;

    for(int i=1; i<n; i++)
        b[i]=0;

    scanf("%d", &m);

    for(i=1; i<n; i++)
    {
        scanf("%d", &a);
        b[abs(a-m)]++;
        m=a;
    }

    for(i=1; i<n; i++)
      {
          if(b[i]!=1)
            {
                k=0;
                break;
            }

      }

    if(k)
        printf("Jolly\n");
    else
        printf("Not jolly\n");
    }

    return 0;
}
