/*
Problem A
Solved by: Liverwort
Date:3/6/12
*/

#include<stdio.h>

int main()
{
    long long int a[10],t;
    int i,j;

    for(i=0; i<10; i++)
    {
        scanf("%lld", &a[i]);
    }

    for(i=0; i<10; i++)
    {
        for(j=i+1; j<10; j++)
        {
            if(a[i]<a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }

    for(i=0; i<3; i++)
    {
        printf("%lld\n", a[i]);
    }

}
