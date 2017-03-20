#include<stdio.h>
#include<math.h>

int Xor(int x, int y)
{
    int a = x & y;
    int b = ~x & ~y;
    int z = ~a & ~b;
    return z;
}

int main()
{
    int l,r,k,xor,i,j;

    long long int a[100000], b[10000];

    scanf("%d %d", &l, &r);


    k=r-l+1;
    k=pow(2,k);

    for(i=0; i<l; i++)
        scanf("%d", &a[i]);

    for(j=0; j<r; j++)
    {
        scanf("%d", &b[j]);
    }

    xor=Xor()
}
