#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	long int t;
	long long int a,b;
	cin>>t;
	while(t--)
	{
		cin>>a>>b;
		if(a<b) cout<<"<"<<endl;
		else if(a>b) cout<<">"<<endl;
		else cout<<"="<<endl;
	}
	return 0;
}