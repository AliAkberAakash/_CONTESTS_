#include<bits/stdc++.h>

using namespace std;

bool xWin(char s[3][3])
{
    if(s[0][0]=='X' && s[0][1]=='X' && s[0][2]=='X')
        return true;
    else if(s[1][0]=='X' && s[1][1]=='X' && s[1][2]=='X')
        return true;
    else if(s[2][0]=='X' && s[2][1]=='X' && s[2][2]=='X')
        return true;
    else if(s[0][0]=='X' && s[1][0]=='X' && s[2][0]=='X')
        return true;
    else if(s[0][1]=='X' && s[1][1]=='X' && s[2][1]=='X')
        return true;
    else if(s[0][2]=='X' && s[1][2]=='X' && s[2][2]=='X')
        return true;
    else if(s[0][0]=='X' && s[1][1]=='X' && s[2][2]=='X')
        return true;
    else if(s[0][2]=='X' && s[1][1]=='X' && s[2][0]=='X')
        return true;

    return false;
}

bool yWin(char s[3][3])
{
    if(s[0][0]=='O' && s[0][1]=='O' && s[0][2]=='O')
        return true;
    else if(s[1][0]=='O' && s[1][1]=='O' && s[1][2]=='O')
        return true;
    else if(s[2][0]=='O' && s[2][1]=='O' && s[2][2]=='O')
        return true;
    else if(s[0][0]=='O' && s[1][0]=='O' && s[2][0]=='O')
        return true;
    else if(s[0][1]=='O' && s[1][1]=='O' && s[2][1]=='O')
        return true;
    else if(s[0][2]=='O' && s[1][2]=='O' && s[2][2]=='O')
        return true;
    else if(s[0][0]=='O' && s[1][1]=='O' && s[2][2]=='O')
        return true;
    else if(s[0][2]=='O' && s[1][1]=='O' && s[2][0]=='O')
        return true;

    return false;
}

bool full(char s[3][3])
{
    bool x=true;
    for(int i=0; i<3&&x; i++)
    {
        for(int j=0; j<3&&x; j++)
            if(s[i][j]=='.')
                x=false;
    }

    return x;
}

int main()
{
	int r=0;
    char c;
    string s;
    char t[3][3];
    int n,o,x;

    scanf("%d", &n);
    getchar();

    n=(4*n)-1;
    o=x=0;

    int counter=0;
    for(int i=1; i<=n; i++)
    {

        getline(cin,s);
        for(int j=0; j<s.size(); j++)
        {
            t[counter][j]=s[j];
            if(s[j]=='O')
                o++;
            else if(s[j]=='X')
                x++;
        }
        counter++;
        if(counter==3)
        {
        	r++;
        	printf("Case %d: ", r);
        	if(yWin(t)&&full(t))
            {
                printf("no\n");
            }
            else if(x==o)
                {
//                    puts("");
//                	for(int j=0; j<3; j++)
//                    {
//                        for(int k=0; k<3; k++)
//                        {
//                            printf("%c", t[j][k]);
//                        }
//                        puts("");
//                    }
                    if(xWin(t) || yWin(t))
                        printf("no\n");
                    else
                        printf("yes\n");
                }
            else if(x-o==1)
                printf("yes\n");
            else
                printf("no\n");
        }
        if(s.length()==0)
        {
            counter=x=o=0;
        }
    }


    return 0;
}
