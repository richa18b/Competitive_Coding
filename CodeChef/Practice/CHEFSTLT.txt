#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t,i,count1,count2,count3;
	string s1,s2;
	cin>>t;
	while(t--)
	{
		count1=0;count2=0;count3=0;
		cin>>s1;
		cin>>s2;
		for(i=0;i<s1.length();++i)
		{
			if(s1[i]!=s2[i])
			{
				if(s1[i]=='?'||s2[i]=='?')
					count1++;
				else count2++;
			}
			if(s1[i]==s2[i]&&s1[i]=='?')
				count3++;
		}
		cout<<count2<<" "<<count1+count2+count3<<endl;
	}
	return 0;
}