#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	long int t;
	long long int n1,n2,m,i;
	cin>>t;
	while(t--)
	{
		cin>>n1>>n2>>m;
		i=1;
		while((n1>0)&&(n2>0)&&(i<=m))
		{
			n1-=i;
			n2-=i;
			i++;
		}
		cout<<n1+n2<<endl;
	}
	return 0;
}