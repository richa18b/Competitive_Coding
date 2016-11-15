#include<bits/stdc++.h>
using namespace std;

int main()
{
	long int t,n;
	long long int count;
	int temp;
	scanf("%li", &t);
	while(t--)
	{
		count=0;
		scanf("%li", &n);
		while(n>0)
		{
			temp=n%10;
			if(temp==4)
				count++;
			n=n/10;
		}
		printf("%lli\n", count);
	}
	return 0;
}