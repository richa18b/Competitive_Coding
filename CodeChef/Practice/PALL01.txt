#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t,i,length;bool flag;
	long int n,temp,a[100000];
	cin>>t;
	while(t--)
	{
		flag=0;length=0;
		cin>>n;
		temp=n;
		i=0;
		do
		{
			a[i]=temp%10;
			temp/=10;
			length++;
			i++;
		}while(temp>0);
		for(i=length-1;i>=0;--i)
		{
			if(a[i]!=n%10)
				{flag=1;
				break;}
			n/=10;
		}
		if(flag)
			cout<<"losses\n";
		else cout<<"wins\n";
	}
	return 0;
}