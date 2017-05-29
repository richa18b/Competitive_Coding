#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	string n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		
		int zero=0,one=0;
		for(int i=0;i<n.length();++i)
		{
			if(zero>1&&one>1)
				break;
			if(n[i]=='0')
				zero++;
			else one++;
		}
		
		if(zero==1)
			cout<<"Yes\n";
		else if(one==1)
			cout<<"Yes\n";
		else cout<<"No\n";
	}
	return 0;
}