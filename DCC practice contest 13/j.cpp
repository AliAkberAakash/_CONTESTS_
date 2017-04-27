#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,maxN;
	while (cin >> n, n) {
        map<string, int> log;
        string ar[80];
        maxN = 0;
		for (int i = 0; i < n; i++) {
			cin >> ar[0] >> ar[1] >> ar[2] >> ar[3] >> ar[4];
			sort(ar, ar + 5);

			string str;
			for (int j = 0; j < 5; j++) {
				str += ar[j];
			}

			if (!log.count(str)) {
				log[str] = 1;
				maxN = max(maxN, 1);
			} else {
				int m = log[str] + 1;
				log[str] = m;
				maxN = max(maxN, m);
			}
		}

		int cnt = 0;
		map<string, int>::iterator it;
		for (it = log.begin(); it != log.end(); it++) {
			if (it->second == maxN)
				cnt += it->second;
		}

		cout << cnt << endl;
	}

	return 0;
}
