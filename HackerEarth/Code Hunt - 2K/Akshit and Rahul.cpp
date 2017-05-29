#include<bits/stdc++.h>
using namespace std;

int division(int a,int b)
{
	return (a>b)?a/b:b/a;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t,i,j,count,number=1,ans;
	int a1,a2,b1,b2,a,b;
	cin>>t;
	while(t--)
	{
		ans=0;
		cin>>a1>>a2>>b1>>b2;
		for(i=a1;i<=a2;++i)
		{
			for(j=b1;j<=b2;++j)
			{
				count=0;
				a=i;
				b=j;
				if(a!=b)
				{
					while(division(a,b)==1)
					{
						if(a>b)
							a=a%b;
						else b=b%a;
						count++;
					}
					if(count%2==0)
						ans++;
				}
			}
		}
		cout<<"Case #"<<number<<": "<<ans<<"\n";
		number++;
	}
	return 0;
}