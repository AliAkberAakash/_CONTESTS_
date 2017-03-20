/*
Problem G
Solved by: Liverwort
Date:3/6/12
*/

#include<stdio.h>

int main()
{
    int N,i,s;

    while(scanf("%d", &N)==1)
    {

    s=0;

    if(N>0)
        for(i=N; i>1; i--)
            s+=i;
    else
        for(i=N; i<-1; i++)
            s+=i;

    printf("%d\n", s);

    }

    return 0;

}
