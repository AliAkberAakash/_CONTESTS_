#include<cstdio>
#include<iostream>
#include<string>
#include<stack>

using namespace std;

bool match(char x, char y)
{
    if(x==')'&&y=='(')
        return true;
    else if(x==']'&&y=='[')
        return true;
    else return false;
}

int main()
{
    int x,braces,flag;
    string k;
    stack <char> b;

    cin>>x;
    getchar();

    while(x--)
    {
        flag=1;
        braces=0;

        getline(cin,k);

        if(k.empty())
        {
            printf("Yes\n");
            continue;
        }

        for(int i=0; i<k.length(); i++)
            {
                if(k[i]=='('||k[i]=='[')
                b.push(k[i]);
            else
            {
                if(b.empty())
                {
                    printf("No\n");
                    flag=0;
                    break;
                }
                else if(match(k[i],b.top()))
                    b.pop();
                else
                    {
                        printf("No\n");
                        flag=0;
                        break;
                    }
            }
            }

            if(flag)
            {
                if(b.empty())
                    printf("Yes\n");
                else printf("No\n");
            }

        while(!b.empty())
            b.pop();
    }

    return 0;
}
