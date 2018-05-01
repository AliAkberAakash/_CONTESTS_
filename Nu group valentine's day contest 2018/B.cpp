#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b;

    scanf("%d %d", &a, &b);

    if((a+b)%3==0)
        printf("Possible\n");
    else if (a%3==0)
        printf("Possible\n");
    else if (b%3==0)
        printf("Possible\n");
    else
        printf("Impossible\n");


    return 0;
}
