#include<stdio.h>
int main()
{
    int x;
    double y;

    scanf("%d", &x);
    scanf("%lf", &y);


    if(((y-0.5)>=x)&&(x%5==0))
        printf("%.2lf\n", (y-(x+.5)));
    else
        printf("%.2lf\n", y);

    return 0;
}
