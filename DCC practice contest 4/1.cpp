#include<stdio.h>
#include<iostream>

int main()
{
    using namespace std;

    long long int i,n,r,e,c,p;

    cin >> n;

    for(i=0; i<n; i++)
    {
       cin >> r;
       cin >> e;
       cin >> c;

        p=e-r;

        if(c>p)
            printf("do not advertise\n");
        else if(c==p)
            printf("does not matter\n");
        else
            printf("advertise\n");
    }

    return 0;
}

