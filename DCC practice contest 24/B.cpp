#include<bits/stdc++.h>

using namespace std;

int md(int x)
{
    if (x<0)
        return -x;
    return x;
}

int lesser(int x, int y)
{
    if(x<y)
        return x;
    return y;

}

int main()
{
    int a,  b;

    scanf("%d %d", &a, &b);

    while( !(a==-1 &&  b==-1) )
    {
        if(a<b)
            swap(a,b);

        printf("%d\n",lesser(md(a-b), 1+(b-0)+(99-a)));
        scanf("%d %d", &a, &b);
    }

    return 0;
}
