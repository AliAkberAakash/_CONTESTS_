/*
* Solved by: Ali AKber Aakash
* Email: cedward318@gmail.com or ali852609@gmail.com
*/

#include<cstdio>
#include<iostream>
#include<string>

using namespace std;

int main()
{
    int t;
    string s;

    scanf("%d", &t);
    getchar();

    while(t--)
    {
        getline(cin,s);

        bool k=true;

        char c=s[0];

        for(int i=0; i<s.length()&&k; i+=2)
            if(s[i]!=c)
                k=false;
        if(k)
            printf("Yes\n");
        else
            printf("No\n");
    }


    return 0;
}
