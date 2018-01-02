#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a[10],n,m;
    memset(a,0,sizeof(a));

    char x;

    scanf("%d", &n);
    getchar();

    for(int i=0; i<n; i++)
    {
        cin >> x;
        m=x-'0';

        if(m==2)
            a[2]++;
        else if(m==3)
            a[3]++;
        else if(m==4)
        {
            a[2]+=2;
            a[3]++;
        }
        else if(m==5)
        {
            a[5]++;
        }
        else if(m==6)
        {
            a[5]++;
            a[3]++;
        }
        else if(m==7)
            a[7]++;
        else if(m==8)
        {
            a[7]++;
            a[2]+=3;
        }
        else if(m==9)
        {
            a[7]++;
            a[2]++;
            a[3]+=2;
        }
    }

    for(int i=9; i>=2; i--)
    {
        while(a[i])
        {
            printf("%d", i);
            a[i]--;
        }
    }

    puts("");


    return 0;
}
