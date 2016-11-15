#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	string s;
	cin>>t;
	while(t--)
	{
		int flag=0;
		cin>>s;
		int mid;
		int n=s.length();
		if(n%2==0)
			mid=n/2-1;
		else mid=n/2;
		
		int i=0;
		while(i<=mid)
		{
			if(s[i]==s[n-1-i]&&s[i]!='.')
				i++;
			else if(s[i]=='.'&&s[n-1-i]!='.')
				s[i]=s[n-1-i];
			else if(s[n-1-i]=='.'&&s[i]!='.')
				s[n-1-i]=s[i];
			else if(s[i]=='.'&&s[n-1-i]=='.')
			{ s[i]='a'; s[n-1-i]='a'; }
			else if(s[i]!=s[n-1-i])
			{ cout<<"-1\n"; flag=1; break; }
		}
		
		if(!flag)
			cout<<s<<"\n";
	}
	return 0;
}