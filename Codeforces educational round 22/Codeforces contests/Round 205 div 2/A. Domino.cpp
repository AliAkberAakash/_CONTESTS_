#include<bits/stdc++.h>

using namespace std;

bool checkEven(int n)
{
    if(n%2) return false;
    return true;
}

bool checkOdd(int n)
{
    if(n%2) return true;
    return false;
}

int main()
{
    int n,o1,o2,x,y,c;

    c=o1=o2=0;

    scanf("%d", &n);

    for(int i=0; i<n; i++)
    {
        scanf("%d %d",&x, &y);
        if(checkOdd(x))
            o1++;
        if(checkOdd(y))
            o2++;
    }

    if(checkEven(o1+o2))
    {
        if(o2>o1)
            swap(o2,o1);
        while(checkOdd(o1) && checkOdd(o2))
        {
            o1--;
            o2++;
            c++;
        }

        printf("%d\n",c);
    }
    else
        printf("-1\n");
    return 0;
}
