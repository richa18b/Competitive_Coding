#include<iostream>
using namespace std;
 
int main()
{
	int a,b,count,t;
	cin>>t;
	while (t--)
	{
		cin>>a>>b;
		count = 0;
		while (a & (a - 1))
		{
			a >>= 1;
			count++;
		}
		if (a < b)
		{
			while (a < b)
			{
				a <<= 1;
				count++;
			}
		}
		else
		{
			while (a > b)
			{
				a >>= 1;
				count++;
			}
		}
		cout<<count<<"\n";
	}
	return 0;
} 