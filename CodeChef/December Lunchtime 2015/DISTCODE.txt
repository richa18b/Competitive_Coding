#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t,i,j,cnt,temp[2];
	string s;
	cin>>t;
	while(t--)
	{
		cnt=0;
		cin>>s;
		for(i=0;i<(s.length()-1);++i)
		{
			temp[0]=s[i];temp[1]=s[i+1];
			j=i;
			while(j<=s.length()-2)
			{
				if(temp[0]==s[j+2]&&temp[1]==s[j+3])
					cnt++;
				j++;
			}
		}
		cout<<s.length()-1-cnt<<endl;
	}
	return 0;
}