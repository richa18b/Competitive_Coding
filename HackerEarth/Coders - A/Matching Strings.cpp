#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t,i,j,count,n;
	string a,b;
	cin>>t;
	assert(1<=t and t<=50);
	while(t--)
	{
		count=0;
		cin>>a;
		assert(1<=a.size() and a.size()<=500);
		cin>>b;
		assert(1<=b.size() and b.size()<=500);
		if(a.size()<b.size())
			n=a.size();
		else n=b.size();
		for(i=0;i<n;++i)
		{
				if(a[i]==b[i])
					count++;
		}
		cout<<count<<"\n";
	}
	return 0;
}