/*
* Solution to 3625 - Rounders ( Regionals 2006 >> North America - South Central USA )
* Solved by: Ali AKber Aakash
* Email: cedward318@gmail.com or ali852609@gmail.com
*/

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    string s,t;

    scanf("%d", &n);
    getchar();

    for(int i=0; i<n; i++)
    {
        getline(cin,s);
        int carry=0;
        for(int j=s.size()-1; j>=0; j--)
        {
            if(s[j]+carry<'5')
            {
                if(j>0)
                    t.push_back('0');
                else
                    t.push_back(s[j]+carry);
                carry=0;
            }
            else if(s[j]+carry>'4')
            {
                if(s.length()==1)
                {
                    t.push_back('0');
                    t.push_back('1');
                }
                else
                {
                    if(j>0)
                    t.push_back('0');
                    else
                    {
                        if(s[j]+carry>'9')
                        {
                            t.push_back('0');
                            t.push_back('1');
                        }
                        else
                            t.push_back(s[j]+carry);
                    }
                    carry=1;
                }
            }
        }
        for(int j=t.length()-1; j>=0; j--)
            printf("%c",t[j]);
        printf("\n");

        s.clear();
        t.clear();
    }


    return 0;
}
