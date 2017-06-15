#include<cstdio>
#include<iostream>
#include<string>

using namespace std;

bool allCaps(string s)
{
    bool j=true;
    for(int i=0; i<s.length()&&j; i++)
        if(s[i]>=97)
            j=false;

    return j;
}

char toCap(char c)
{
    if(c>=97&&c<=122)
        c-=32;

    return c;
}

int main()
{
    string s;

    while(cin>>s)
    {


        if(allCaps(s))
        {
            for(int i=0; i<s.length(); i++)
            {
                printf("%c", s[i]+32);
            }
            printf("\n");
        }
        else
        {
            if(s.length()>1)
            {
                if(s[0]>=97&&s[0]<=122)
                {
                    string t=s.substr(1, s.length()-1);
                    if(allCaps(t))
                    {
                        printf("%c", s[0]-32);
                        for(int i=1; i<s.length(); i++)
                            printf("%c", s[i]+32);
                        printf("\n");
                    }
                    else
                    cout<<s<<endl;
                }
                else
                {
                    cout<<s<<endl;
                }

            }
            else
                printf("%c\n", toCap(s[0]));
        }
    }




    return 0;
}
