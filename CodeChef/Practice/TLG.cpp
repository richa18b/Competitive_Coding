#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,leader;
	long p1,p2,a=0,b=0,lead=0;
	cin>>n;
	while(n--)
	{
		cin>>p1>>p2;
		a+=p1;
		b+=p2;
		if((a>b)&&(a-b>lead))
		{
			leader=1;
			lead=a-b;
		}
		else if((b>a)&&(b-a>lead))
		{
			leader=2;
			lead=b-a;
		}
	}
	cout<<leader<<" "<<lead;
	return 0;
}