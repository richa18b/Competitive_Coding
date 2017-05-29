#include<bits/stdc++.h>
using namespace std;

int main()
{
	long int t,n,r;
	int temp;
	scanf("%li", &t);
	while(t--)
	{
		r=0;
		scanf("%li", &n);
		while(n>0)
		{
			temp=n%10;
			r=(r*10)+temp;
			n=n/10;
		}
		printf("%li\n", r);
	}
	return 0;
}