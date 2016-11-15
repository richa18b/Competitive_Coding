#include<bits/stdc++.h>
using namespace std;

long int n;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	long int i;
	cin>>n;
	long int r[n];
	int flag[n];
	for(i=1;i<=n;++i)
	{
		flag[i]=0;
	}
	for(i=1;i<=n;++i)
	{
		cin>>r[i];
		flag[r[i]]=1;
	}
	for(i=1;i<=n;++i)
	{
		if (flag[i]==0)
			cout<<i<<" ";
	}
	return 0;
}