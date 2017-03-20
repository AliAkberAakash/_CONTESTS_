#include<stdio.h>

int main()
{
    int a;

    scanf("%d", &a);

    if(a>=1&&a<=4)
        printf("few\n");
    else if(a>=5&&a<=9)
        printf("several\n");
    else if(a>=10&&a<=19)
        printf("pack\n");
    else if(a>=20&&a<=49)
        printf("lots\n");
    else if(a>=50&&a<=99)
        printf("horde\n");
    else if(a>=100&&a<=249)
        printf("throng\n");
    else if(a>=250&&a<=499)
        printf("swarm\n");
    else if(a>=500&&a<=999)
        printf("zounds\n");
    else
        printf("legion\n");


    return 0;
}
