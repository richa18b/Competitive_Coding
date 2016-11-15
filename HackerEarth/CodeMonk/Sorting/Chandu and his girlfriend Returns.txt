#include<bits/stdc++.h>
using namespace std;

const int MAX=1e5+5;

long long int a[MAX],b[MAX];
long int n,m;
int t;
vector<long long> c;

void merge()
{
	int i=0,j=0;
	c.clear();
	while(i<n and j<m)
	{
		if(a[i]>b[j])
			c.push_back(a[i++]);
		else c.push_back(b[j++]);
	}
	while(i<n)
		c.push_back(a[i++]);
	while(j<m)
		c.push_back(b[j++]);
}

int main()
{
	int i;
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		assert(1<=n and n<=50000);
		assert(1<=m and m<=50000);
		for(i=0;i<n;++i)
		{
			cin>>a[i];
			assert(0<=a[i] and a[i]<=1000000000);
		}
		for(i=0;i<m;++i)
		{
			cin>>b[i];
			assert(0<=b[i] and b[i]<=1000000000);
		}
		merge();
		for(i=0;i<c.size();++i)
			cout<<c[i]<<" ";
		cout<<"\n";
	}
	return 0;
}