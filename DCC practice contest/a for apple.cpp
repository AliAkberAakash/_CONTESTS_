/*
*
* Program Name: a for apple
* Details: summation
* Solved By: Liverwort
* Date: 28.7.2016
*
*/

#include<stdio.h>


int main()
{
    int T, i, a,b;

    scanf("%d", &T);

    for(i=1; i<=T; i++)
    {
        scanf("%d %d", &a, &b);

        printf("Case %d: %d\n", i, (a+b));
    }

    return 0;
}

