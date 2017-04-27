#include <iostream>
#include <vector>
#include <cstdio>

bool seive[10000005];
int main()
{
    std::vector<int> prime;
    int n, half, c;
    seive[0] = true; seive[1]  = true;
    for(int i=2;i<=5000000; i++){
        if(seive[i]==false){
            prime.push_back(i);
            for(int j=2*i; j<=10000000; j+=i)
                seive[j]=true;
        }
    }
    scanf("%d", &c);
    for(int x=1; x<=c; x++)
    {
        scanf("%d", &n);
        half = n/2;
        int pairs=0, temp;
        for(std::vector<int>::iterator it=prime.begin(); it!=prime.end() && *it<=half; it++)
        {
            if(seive[n-*it]==false)
            pairs++;
        }
    }
    return 0;
}
