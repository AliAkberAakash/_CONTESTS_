#include<cstdio>
#include<iostream>
#include<cstring>
#include<string>

using namespace std;

int LCS[1024][1024];

int LCSlength(string x, string y)
{
    int m=x.length();
    int n=y.length();
    for(int i=0; i<=m; i++)
        LCS[i][n]=0;
    for(int i=0; i<=n; i++)
        LCS[m][i]=0;

    for(int i=m-1; i>=0; i--)
    {
        for(int j=n-1; j>=0; j--)
        {
            LCS[i][j]=LCS[i+1][j+1];

            if(x[i]==y[j])
                LCS[i][j]++;

            if(LCS[i][j+1]>LCS[i][j])
                LCS[i][j]=LCS[i][j+1];

            if(LCS[i+1][j]>LCS[i][j])
                LCS[i][j]=LCS[i+1][j];
        }
    }

    return LCS[0][0];
}

int main()
{
    int n;

    string s,k;

    scanf("%d", &n);

    for(int i=1; i<=n; i++)
    {
        cin>>s;
        cin>>k;

        printf("Case %d: %d\n", i, LCSlength(s,k));

    }

    return 0;
}
