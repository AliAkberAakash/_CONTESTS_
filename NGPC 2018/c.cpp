#include<bits/stdc++.h>

using namespace std;

bool possible(int a, int b, int x, int y)
{
    if(a>=0 && a<x && b>=0 && b<y)
        return true;
    return false;
}

int mx(int a[])
{
    int x=a[0];
    for(int i=1; i<26; i++)
        if(x<a[i])
            x=a[i];
    return x;
}

int main()
{

    int t;

    scanf("%d", &t);

    while(t--)
    {
        char s[41][41];
        int row, column;
        int stars[26];

        memset(stars,0,sizeof(stars));

        scanf("%d %d", &row, &column);
        getchar();

        int astrCount=0;
        int alphaCount=0;
        for(int i=0; i<row; i++)
        {

            for(int j=0; j<column; j++)
            {
                scanf("%c", &s[i][j]);
                if(s[i][j]=='*')
                    astrCount++;
                if(s[i][j]>='A' && s[i][j]<='Z')
                    alphaCount++;
            }
            getchar();
        }

        if(astrCount==0 || alphaCount==0)
        {
            printf("Ajob na?\n");
        }
        else
        {
            for(int i=0; i<row; i++)
            {
                for(int j=0; j<column; j++)
                {
                    int counter=0;
                    if(s[i][j]>='A' && s[i][j]<='Z')
                    {
                        if(possible(i+1,j,row,column))
                        {
                            if(s[i+1][j]=='*')
                            counter++;
                        }
                        if(possible(i-1,j,row,column))
                        {
                            if(s[i-1][j]=='*' )
                            counter++;
                        }
                        if(possible(i,j+1,row,column))
                        if(s[i][j+1]=='*' )
                            counter++;
                        if(possible(i,j-1,row,column))
                        if(s[i][j-1]=='*' )
                            counter++;
                        if(possible(i+1,j+1,row,column))
                        if(s[i+1][j+1]=='*')
                            counter++;
                        if(possible(i-1,j-1,row,column))
                        if(s[i-1][j-1]=='*')
                            counter++;
                        if(possible(i+1,j-1,row,column))
                        if(s[i+1][j-1]=='*')
                            counter++;
                        if(possible(i-1,j+1,row,column))
                        if(s[i-1][j+1]=='*')
                            counter++;
                    }

                    if(counter>stars[s[i][j]-65])
                    stars[s[i][j]-65]=counter;

                }
            }

            int x = mx(stars);

            for(int i=0; i<26; i++)
                if(stars[i]==x)
                    {
                        printf("%c\n", i+65);
                        break;
                    }

        }



    }


    return 0;
}
