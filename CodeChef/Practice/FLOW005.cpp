#include<bits/stdc++.h>
using namespace std;

int main()
{
	long int t,n,count;
	int a[6]={1,2,5,10,50,100},i;
	scanf("%li", &t);
	while(t--)
	{
		count=0;
		scanf("%li", &n);
		for(i=5;i>=0;--i)
		{
			if(n>0)
			{
				count+=n/a[i];
				n%=a[i];
			}
		}
		printf("%li\n", count);
	}
	return 0;
}