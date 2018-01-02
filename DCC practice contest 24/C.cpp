#include<bits/stdc++.h>

using namespace std;

int  main()
{
    int a,b,c,t;


    scanf("%d", &t);

    for(int i=0; i<t; i++)
    {
        scanf("%d %d %d", &a, &b, &c);

        int  ans=c*(a+(a-b))/(a+b);

        if(ans<=0)
            printf("0\n");
        else
            printf("%d\n", ans);

    }



    return 0;
}
