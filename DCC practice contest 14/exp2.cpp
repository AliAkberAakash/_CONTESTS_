#include<stdio.h>
#include<math.h>

int main()
{
    int test,num,i,sum,high;
    float N;
    scanf("%d",&test);
    while(test--)
    {
        scanf("%d",&num);
        N=sqrt(num);
        sum=0;
        for(i=1; i<N; i++)
        {
            if(num%i==0)
            {
                high=num/i;
                sum=sum+i;
                if(high==i)
                    sum=sum+high;
            }
        }
        printf("%d\n",sum);
    }
    return 0;
}
