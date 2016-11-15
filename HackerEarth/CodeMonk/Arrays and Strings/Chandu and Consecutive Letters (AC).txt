#include<bits/stdc++.h>
using namespace std;

string str;

int main()
{
	int t,i,j=0;
	cin>>t;
	while(t--)
	{
		cin>>str;
		for(i=0;i<str.size();++i)
		{
			if(str[i]!=str[i+1])
				cout<<str[i];
		}
		cout<<"\n";
	}
	return 0;
}