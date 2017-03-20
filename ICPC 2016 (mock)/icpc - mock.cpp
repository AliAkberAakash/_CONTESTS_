#include<stdio.h>

int main()
{
    long int test,number,i,j,k,answer;

    scanf("%ld", &test);

    while(test--)
    {
        answer=0;

        scanf("%ld", &number);

        for(i=1; i<=number; i++)
        {
            for(j=1; j<=number; j++)
            {
                for(k=1; k<=number; k++)
                {
                    if(i+j+k==number)
                    {
                        if((i+j=>k)&&(j+k=>i)&&(k+i=>j))
                        {
                            printf("%ld %ld %ld\n\n", i,j,k);

                            answer++;
                        }
                    }
                }
            }
        }

        printf("answer: %ld\n", answer);

    }

    return 0;
}
