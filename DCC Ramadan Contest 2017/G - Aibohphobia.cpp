#include<bits/stdc++.h>

using namespace std;

int lcs[7000][7000];

void rev(string &str)
{
    int n = str.length();

    for (int i=0; i<n/2; i++)
       swap(str[i], str[n-i-1]);
}


int len(string x, string y)
{
    int m,n;

    m=n=x.length();

    memset(lcs,0,sizeof(lcs));

    for(int i=0; i<m; i++)
        lcs[i][n]=0;
    for(int j=0; j<=n; j++)
        lcs[m][j]=0;

    for(int i=m-1; i>=0; i--)
    {
        for(int j=n-1; j>=0; j--)
        {
            lcs[i][j]=lcs[i+1][j+1];

            if(x[i]==y[j])
                lcs[i][j]++;
            if(lcs[i][j+1]>lcs[i][j])
                lcs[i][j]=lcs[i][j+1];
            if(lcs[i+1][j]>lcs[i][j])
                lcs[i][j]=lcs[i+1][j];
        }
    }

    return lcs[0][0];
}


int findPalindrome(string s)
{
    string t;
    t=s;
    rev(t);
    return s.length()-len(s,t);
}


int main()
{
    int n;
    string  s;

    scanf("%d", &n);
    getchar();
    for(int i=0; i<n; i++)
    {
        getline(cin,s);

        printf("%d\n", findPalindrome(s));
    }

    return 0;
}
