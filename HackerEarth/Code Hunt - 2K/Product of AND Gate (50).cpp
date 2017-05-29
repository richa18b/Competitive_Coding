#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t,a,b,c,i;
	cin>>t;
	while(t--)
	{
		cin>>a>>b;
		c=a;
		for(i=a+1;i<=b;++i)
			c&=i;
		cout<<c<<"\n";
	}
	return 0;
}