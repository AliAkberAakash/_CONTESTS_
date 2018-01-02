/*
* Solution to A - Detailed Differences
* Solved by: Ali AKber Aakash
* Email: cedward318@gmail.com or ali852609@gmail.com
*/

#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s1,s2;
    int test;

    scanf("%d", &test);
    getchar();

    for(int i=0; i<test; i++)
    {
        getline(cin,s1);
        getline(cin,s2);

        cout<<s1<<endl<<s2<<endl;

        int l=s1.length();

        for(int j=0; j<l; j++)
        {
            if(s1[j]==s2[j])
                printf(".");
            else
                printf("*");
        }
        puts("\n");
    }


    return 0;
}
