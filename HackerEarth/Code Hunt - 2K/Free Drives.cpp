#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t,i;
	long int n,ans;
	cin>>t;
	while(t--)
	{
		ans=0;
		cin>>n;
		for(i=n-1;i>=1;--i)
			ans+=i;
		cout<<ans<<"\n";
	}
	return 0;
}