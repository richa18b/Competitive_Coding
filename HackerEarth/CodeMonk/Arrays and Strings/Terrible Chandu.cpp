#include<bits/stdc++.h>
using namespace std;

string str;

int main()
{
	int t,i;
	cin>>t;
	while(t--)
	{
		cin>>str;
		for(i=(str.size())-1;i>=0;--i)
			cout<<str[i];
		cout<<"\n";
	}
	return 0;
}