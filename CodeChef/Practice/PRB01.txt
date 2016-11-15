#include<bits/stdc++.h>
using namespace std;

int main()
{
	long int t,n,i,count;
	scanf("%li", &t);
	while(t--)
	{
		count=0;
		scanf("%li", &n);
		if(n==1)
			printf("no\n");
		else
		{
			for(i=2;i<n;++i)
			{
				if(n%i==0)
					break;
				else count++;
			}
			if(count==n-2)
				printf("yes\n");
			else printf("no\n");
		}
	}
	return 0;
}