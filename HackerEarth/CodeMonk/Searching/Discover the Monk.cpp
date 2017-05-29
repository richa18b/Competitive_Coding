#include<bits/stdc++.h>
using namespace std;

typedef long long int lli;

const int MAX=100005;

lli a[MAX],x[MAX];

bool bin_search(long int i,int left,int right)
{
	int mid;
	while(left<=right)
	{
		mid=(left+right)/2;
		if(a[mid]==x[i])
			return true;
		else if(x[i]<a[mid])
			right=mid-1;
		else left=mid+1;
	}
	return false;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	long int n,q,i;
	bool ans;lli item;
	cin>>n>>q;
	for(i=0;i<n;++i)
		cin>>a[i];
	sort(a,a+n);
	for(i=0;i<q;++i)
	{
		cin>>x[i];
		ans=bin_search(i,0,n-1);
		if(ans)
			cout<<"YES\n";
		else cout<<"NO\n";
	}
	return 0;
}