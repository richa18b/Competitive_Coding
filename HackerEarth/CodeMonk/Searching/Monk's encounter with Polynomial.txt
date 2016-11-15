#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	long int t,a,b,c,lb,ub,ans;
	ll mid,k,value;
	cin>>t;
	while(t--)
	{
		cin>>a>>b>>c>>k;
		lb=0;ub=100000;
		while(lb<=ub)
		{
			mid=(lb+ub)/2;
			value=(a*mid*mid)+(b*mid)+c;
			if(value>=k)
				{ans=mid;ub=mid-1;}
			else
				lb=mid+1;
		}
		cout<<ans<<"\n";
	}
	return 0;
}