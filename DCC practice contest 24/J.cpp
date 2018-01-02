#include<bits/stdc++.h>

using namespace std;

bool isPrime(int num)
{
    for (int i=2; i<=num/2; i++)
     if (num%i==0)
        return 0;

  return 1;
}

int main()
{
    char str[1000];

    while(scanf("%s", str)!=EOF)
    {
        int sum=0;
        int l=strlen(str);
        for(int i=0; i<l; i++)
            {
                if(str[i]>='a' && str[i]<='z')
                sum+=str[i]-'a'+1;
            else
                sum+=str[i]-'A'+27;
            }

        if(isPrime(sum))
            printf("It is a prime word.\n");
        else
            printf("It is not a prime word.\n");

    }

    return 0;
}
