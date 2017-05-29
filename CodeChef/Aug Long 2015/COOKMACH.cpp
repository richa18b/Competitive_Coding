#include <iostream>
using namespace std;
typedef long long ll;

int main()
{
	long int t;
	ll a,b;
	int count=0;
	cin>>t;
	while(t--)
	{
		count=0;
		cin>>a>>b;
		if(a==b)
			cout<<"0"<<endl;
		else
		{
			while(a!=b)
			{
				if(a<b)
				{
					if(b%a==0)
					{
						a=a*2;
						count++;
					}
					else
					{
						if(a%2!=0)
						{
							a=(a-1)/2;
							count++;
						}
						else
						{
							a=a/2;
							count++;
						}
					}
				}
				else
				{
					a=a*2;
					count++;
				}
			}
			cout<<count<<endl;
		}
	}
	return 0;
}