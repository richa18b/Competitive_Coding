#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	bool flag;
	long int n,i,start;
	long double x,sum;
	cin>>t;
	while(t--)
	{
		flag=false;
		cin>>n>>x;
		long int cost[n];
		for(i=0;i<n;++i)
			cin>>cost[i];
		start=0;
		sum=cost[0];
		i=1;
		for(i=1;i<n;++i)
		{
			while(sum>x)
			{	
				sum-=cost[start];
				start++;
			}
			if(sum==x)
			{
				flag=true;
				break;
			}
			sum+=cost[i];
		}
		while(sum>x)
		{
			sum-=cost[start];
			start++;
		}
		if(sum==x)
		{
			flag=true;
		}
		if(flag)
			cout<<"YES\n";
		else cout<<"NO\n";
	}
	return 0;
}