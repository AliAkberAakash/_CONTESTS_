#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>

using namespace std;

void combination(char a[], char data[], int start, int end, int index, int r);

void printCombination(char a[], int n, int r)
{
    char data[r];

    sort(a,a+n);

    combination(a,data,0,n-1,0,r);
}

void combination(char a[], char data[], int start, int end, int index, int r)
{
    if(index==r)
    {
        for(int i=0; i<r; i++)
            printf("%c", data[i]);
        printf("\n");
        return;
    }

    for(int i=start; i<=end&&(end-i+1)>=(r-index); i++)
    {
        data[index]=a[i];
        combination(a,data,i+1,end,index+1,r);

        while(a[i]==a[i+1])
            i++;
    }
}



int main()
{
    char s[100];
    int r;

    while(scanf("%s", s))
    {
        scanf("%d",&r);

        printCombination(s,strlen(s),r);
    }

    return 0;
}
