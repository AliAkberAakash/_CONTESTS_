#include<bits/stdc++.h>

using namespace std;

int findSum(vector <int> divisor)
{
    int sum=0;

    for(int i=0; i<divisor.size(); i++)
        sum+=divisor[i];

    return sum;
}

int main()
{
    int x;
    vector <int> divisor;

    scanf("%d", &x);

    printf("PERFECTION OUTPUT\n");
    while(x)
    {

        //find divisors
        for(int i=1; i<x; i++)
            if(x%i==0)
                divisor.push_back(i);

        int sum=findSum(divisor);



        if(sum==x)
            printf("%5d  PERFECT\n", x);
        else if(sum>x)
            printf("%5d  ABUNDANT\n", x);
        else
            printf("%5d  DEFICIENT\n", x);


        divisor.clear();
        scanf("%d", &x);
    }

    printf("END OF OUTPUT\n");



    return 0;
}
