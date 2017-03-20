/*
Problem name: Tell me the Frequencies
Solved By: Liverwort
Date: 2/6/2016
*/

#include<stdio.h>
#include<string.h>

int frq[128];

int main()
{
    int i,j,t;
    char s[1000];


    gets(s);
    for(i=0; i<strlen(s); i++)
    {
        t=s[i];
        frq[t]++;
    }

    for(i=32; i<129; i++)
    {
        for(j=32; j<129-i; j++)
        {
            if(frq[j]>frq[j+1])
            {
                t=frq[j];
                frq[j]=frq[j+1];
                frq[j+1]=t;
            }
        }
    }

    for(i=32; i<129; i++)
    {
        if(frq[i])
        printf("%d %d\n", i,frq[i]);
    }


    return 0;

}

