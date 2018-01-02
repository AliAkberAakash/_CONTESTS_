#include <bits/stdc++.h>
using namespace std;

bool op(string s)
{
    int l=s.length();
    for(int i=0; i<l; i++)
    {
        if(s[i]=='+')
            return true;
        else if(s[i]=='-')
            return false;
    }

}

int main() {

	string s;
	int n,x;

	scanf("%d", &n);
	getchar();

	x=0;
	for(int i=0; i<n; i++)
	{
	    getline(cin,s);
	    bool o=op(s);

	    if(o)
            x++;
        else
            x--;
	}

	printf("%d\n", x);

	return 0;
}
