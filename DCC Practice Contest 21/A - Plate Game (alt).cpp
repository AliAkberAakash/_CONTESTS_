#include <cstdio>

int main(){

    int a,b,r;

    scanf("%d %d %d",&a, &b, &r);

    r+=r;

    if(r <= a && r <= b)
        printf("First\n");
    else
        printf("Second\n");

    return 0;
}
