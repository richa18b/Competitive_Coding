#include<bits/stdc++.h>
using namespace std;

string a,b;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t,i,j;bool flag;
	cin>>t;
	while(t--)
	{
		flag=0;
		cin>>a;
		cin>>b;
		for(i=0;i<a.size();++i)
		{
			for(j=0;j<b.size();++j)
			{
				if(a[i]==b[j])
				{
					flag=1;
					break;
				}
			}
		}
		if(flag)
			cout<<"YES\n";
		else cout<<"NO\n";
	}
	return 0;
}