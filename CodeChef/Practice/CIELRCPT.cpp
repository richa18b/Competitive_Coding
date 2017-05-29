#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,q,r,c;
	long int p;
	cin>>t;
	while(t--)
	{
		c=0;
		cin>>p;
		r=p%2048;
		q=p/2048;
		while(r)
		{
			if(r%2==1)
				c++;
			r/=2;
		}
		cout<<q+c<<endl;
	}
	return 0;
}