#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	long int n,i;
	cin>>t;
	while(t--)
	{
		cin>>n;
		long long int a[n];
		for(i=0;i<n;++i)
			cin>>a[i];
		sort(a,a+n);
		for(i=n-1;i>=0;--i)
			cout<<a[i]<<" ";
		cout<<"\n";
	}
	return 0;
}