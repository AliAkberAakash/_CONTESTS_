#include<stdio.h>

int main(){

    int p, q, y;
    while(scanf("%d %d %d",&p, &q,&y)==3){
        printf("%d\n",(p*5+q*2)*y*52);
    }

    return 0;
}
