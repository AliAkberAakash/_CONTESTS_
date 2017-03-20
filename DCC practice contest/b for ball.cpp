/*
*
* Program Name: b for ball
* Details: minus
* Solved By: Liverwort
* Date: 28.7.2016
*
*/

#include<stdio.h>

int main()
{
    long long int a,b;

    while(scanf("%lld %lld", &a, &b)!=EOF)
       {
           if(a>b)
            printf("%lld\n", (a-b));
           else
            printf("%lld\n", (b-a));
       }

    return 0;
}

