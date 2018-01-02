#include<cstdio>

using namespace std;

int main()
{
    int n,c;
    char d,x,y;

    scanf("%d", &n);

    c=0;

    getchar();

    scanf("%c%c", &x, &y);
    getchar();
    d=y;

    for(int i=1; i<=n-1; i++)
    {
        scanf("%c%c", &x, &y);
        getchar();
        if(d==x)
            c++;
        d=y;
    }

    printf("%d\n", c+1);

    return 0;
}
