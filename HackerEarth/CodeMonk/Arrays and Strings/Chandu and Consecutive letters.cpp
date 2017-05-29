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
		for(i=0;i<str.size()-1;i++)
		{
			if(str[i]==str[i+1])
			str[i]=NULL;
		}
		cout<<str<<"\n";
	}
	return 0;
}