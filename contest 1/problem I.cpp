/*
Problem C
Solved by: Liverwort
Date:3/6/12
*/

#include<stdio.h>

int main()
{
    int a;

    while(scanf("%d", &a)==1)
    {
        if(a>2&&a%2==0)
            printf("YES\n");
        else
            printf("NO\n");
    }

}
