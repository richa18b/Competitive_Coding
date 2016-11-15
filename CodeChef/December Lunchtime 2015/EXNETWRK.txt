#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	long int n,m,i;
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		assert(1<=n<=100);
		assert(1<=m<=(n*(n-1))/2);
		if(m>=(n-1)&&m<=n*(n-1)/2)
		{
			for(i=1;i<=m;++i)
			{
				if(i==m&&m>=n)
					cout<<i<<" 1"<<endl;
				else cout<<i<<" "<<i+1<<endl;
			}
		}
		else cout<<"-1 -1"<<endl;
	}
	return 0;
}