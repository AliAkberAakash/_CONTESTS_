/*
* Solution to Snake Precession (Codechef SnackDown contest 2017)
* Solved by: Team Lovers Nest
* Email: cedward318@gmail.com or ali852609@gmail.com
*/

#include<cstdio>
#include<string>
#include<iostream>

using namespace std;

int  main()
{
    string s;
    int t,n,h;

    scanf("%d", &t);

    while(t--)
    {
        h=0;
        scanf("%d", &n);
        getchar();
        getline(cin,s);

        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='H')   h++;
            else if(s[i]=='T')  h--;

            if(h>1 || h<0)
            {
                h=1;
                break;
            }
        }

        if(h)
            printf("Invalid\n");
        else
            printf("Valid\n");
    }

    return 0;
}
