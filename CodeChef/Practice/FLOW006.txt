#include<bits/stdc++.h>
using namespace std;

int main()
{
	long int t,n,s;
	int temp;
	scanf("%li",&t);
	while(t--)
	{
		s=0;
		scanf("%li", &n);
		while(n>0)
		{
			temp=n%10;
			s+=temp;
			n=n/10;
		}
		printf("%li\n", s);
	}
	return 0;
}