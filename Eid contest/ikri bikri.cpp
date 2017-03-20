#include <iostream>
using namespace std;

int main() {
	long long int t,l,n,i;

	cin>>t;

	for(i=1; i<=t; i++)
	{
		cin>>l>>n;
		cout<<"Case "<<i<<": "<<l-1-n<<endl;
	}
	return 0;
}
