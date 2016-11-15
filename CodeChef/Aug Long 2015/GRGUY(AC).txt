#include <bits/stdc++.h>
using namespace std;

string s1,s2;
int t,l,ans1,ans2,ans,flag;

int func1(int index,int count,int flag)
{
	if(index==l-1)
		return count;
	if(!flag)
	{
		if(s1[index+1]=='.')
			return func1(index+1,count,0);
		else if(s2[index+1]=='.')
			return func1(index+1,count+1,1);
		return -1;
	}
	if (flag)
	{
		if(s1[index+1]=='.')
			return func1(index+1,count,1);
		else if(s2[index+1]=='.')
			return func1(index+1,count+1,1);
		return -1;
	}
}

int main() 
{
	cin>>t;
	while(t--)
	{
		cin>>s1;
		cin>>s2;
		l=s1.length();
		ans1=INT_MAX;ans2=INT_MAX;flag=0;
		if(s1[0]=='#'&&s2[0]=='#')
			cout<<"No"<<endl;
		else
		{
			if(s1[0]=='.')
			{
				ans1=func1(0,0,0);
				if(ans1==-1)
					flag=1;
			}
			if(s2[0]=='.')
			{
				ans2=func1(0,0,1);
				if(ans2==-1)
					flag=1;
			}
			if(flag)
				cout<<"No"<<endl;
			else
			{
				cout<<"Yes"<<endl;
				ans=min(ans1,ans2);
				cout<<ans<<endl;
			}
		}
	}
	
	
	return 0;
}