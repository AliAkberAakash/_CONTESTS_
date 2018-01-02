/*
* Solution to C - Flexible Spaces
* Solved by: Ali AKber Aakash
* Email: cedward318@gmail.com or ali852609@gmail.com
*/

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, x;

    scanf("%d %d", &n, &m);

    for(int i=0; i<m; i++)
        scanf("%d", &x);

    for(int i=1; i<=n; i++)
    {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}
