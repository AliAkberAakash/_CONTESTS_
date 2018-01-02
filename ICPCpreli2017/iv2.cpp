#include<stdio.h>
#include<math.h>

int sop(int a){
    int c=0;
    while(a!=0){
        c=c+a%10;
        a=a/10;
    }
    if(c>=10)
        c= sop(c);
    else
        return c;
}

int main(){
    int t;
    char ch;
    scanf("%d ", &t);
    for(int i=1; i<=t; i++){
        int a = 0;
        int b=0;
        while((ch=getchar())!=' '){
            a=a+(ch-'0');
        }
        a=sop(a);
        //printf("%d\n",a);
        while((ch=getchar())!='\n'){
            b=b+(ch-'0');
        }
        b=sop(b);
        //printf("%d\n",b);
        printf("Case %d: %d\n",i, sop((int)pow(a,b)));
    }
}
