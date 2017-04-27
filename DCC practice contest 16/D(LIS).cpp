#include<cstdio>
#include<cstdlib>
#include<iostream>
#include<vector>
#include<string>

using namespace std;

void find_lis(vector<int> &a, vector<int> &b)
{
	vector<int> p(a.size());
	int u, v;

	if (a.empty()) return;

	b.push_back(0);

	for (size_t i = 1; i < a.size(); i++)
        {
                // If next element a[i] is greater than last element of
                // current longest subsequence a[b.back()], just push it at back of "b" and continue
		if (a[b.back()] < a[i])
                {
			p[i] = b.back();
			b.push_back(i);
			continue;
		}

                // Binary search to find the smallest element referenced by b which is just bigger than a[i]
                // Note : Binary search is performed on b (and not a).
                // Size of b is always <=k and hence contributes O(log k) to complexity.
		for (u = 0, v = b.size()-1; u < v;)
                {
			int c = (u + v) / 2;
			if (a[b[c]] < a[i]) u=c+1; else v=c;
		}

                // Update b if new value is smaller then previously referenced value
		if (a[i] < a[b[u]])
                {
			if (u > 0) p[i] = b[u-1];
			b[u] = i;
		}
	}

	for (u = b.size(), v = b.back(); u--; v = p[v]) b[u] = v;
}

int s_i(string s)
{
    int k=0,l=s.length()-1;
    int i=1;
    while(l>=0)
    {
        k+=(s[l]-'0')*i;
        i*=10;
        l--;
    }

    return k;

}

int main()
{
    string k;
    vector <int> a;
    vector <int> b;
    int n;

    scanf("%d\n", &n);

    while(n--)
    {
        while(1)
        {
            getline(cin,k);
            if(k.length()!=0)
                a.push_back(s_i(k));
            else
            {
                find_lis(a, b);

                printf("Max hits: %d\n", b.size());
                for(int i=0; i<b.size(); i++)
                    printf("%d\n", a[b[i]]);

                a.clear();
                b.clear();
                break;
            }
        }
        if(n)
            puts("");
    }

    return  0;
}
