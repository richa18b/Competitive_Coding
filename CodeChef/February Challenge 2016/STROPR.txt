#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	long int x,n,i,j;
	long long int m;
	cin>>t;
	while(t--)
	{
		cin>>n>>x>>m;
		long long int a[n];
		for(i=1;i<=n;++i)
			cin>>a[i];
		for(i=1;i<=m;++i)
		{
			for(j=2;j<=n;++j)
				a[j]+=a[j-1];
		}
		cout<<fmod(a[x],(pow(10,9)+7))<<endl;
	}
	return 0;
}