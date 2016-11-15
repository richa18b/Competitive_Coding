#include <bits/stdc++.h>
using namespace std;

int main() 
{
	string l1,l2;
	int t,i,count1=0,count2=0;
	cin>>t;
	while(t--)
	{
		cin>>l1>>l2;
		for(i=0;i<l1.length();i++)
		{
			if(l1[i]=='#'&&l2[i]=='#')
			{
				cout<<"No"<<endl;
				break;
			}
		}
		if(i==l1.length())
		{
			cout<<"Yes"<<endl;
			count1=0;
			count2=0;
			for(i=0;i<l1.length();i++)
			{
				if(l1[i]=='.'&&l2[i]=='#')
					count1++;
				else if(l2[i]=='.'&&l1[i]=='#')
					count2++;
			}
			if(count1==count2)
				cout<<(count1+count2);
			//else
			//cout<<(abs(count1-count2))+1;
		}
		cout<<endl;
	}
	return 0;
}