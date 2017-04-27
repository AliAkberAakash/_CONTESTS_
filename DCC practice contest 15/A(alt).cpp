#include<iostream>
#include<cstdio>
#define SIZE 10

int a[SIZE][SIZE];

void table()
{
    for(int i=0; i<SIZE; i++)
    {
        a[i][0]=1;
        a[0][i]=1;
    }

    for(int i=1; i<SIZE; i++)
    {
        for(int j=1; j<SIZE; j++)
        {
            a[i][j]=a[i-1][j]+a[i][j-1];
        }
    }

}


int main()
{
    table();

    int n;
    scanf("%d", &n);

    printf("%d\n", a[n-1][n-1]);
}
