#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t,i;bool flag;
	string x,y;
	cin>>t;
	while(t--)
	{
		flag=false;
		cin>>x;
		cin>>y;
		for(i=0;i<x.length();++i)
		{
			if(x[i]!=y[i])
			{
				if(x[i]!='?'&&y[i]!='?')
					{
						flag=true;
						break;
					}
			}
		}
		if(!flag)
			cout<<"Yes\n";
		else cout<<"No\n";
	}
	return 0;
}