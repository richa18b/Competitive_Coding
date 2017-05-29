#include<bits/stdc++.h>

//#define MAX 100000

using namespace std;

//long long int a[MAX];

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	long int n,count,i;
	cin>>t;
	while(t--)
	{
		cin>>n;
		long long int a[n];
		count=0;
		for(i=1;i<=n;++i)
			cin>>a[i];
		for(i=1;i<n;i++)
			if(a[i]<=a[i+1])
				count++;
		sort(a,a+n);
		for(i=1;i<n;++i)
			if(a[i]!=a[i+1])
				count++;	
		cout<<count+1<<"\n";
	}
	return 0;
}