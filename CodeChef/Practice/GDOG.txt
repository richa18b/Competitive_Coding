#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,max,i;
	long int n,k;
	scanf("%d", &t);
	while(t--)
	{
		max=0;
		scanf("%li %li", &n,&k);
		for(i=1;i<=k;++i)
		{
			if(n%i>max)
				max=n%i;
		}
		printf("%d\n", max);
	}
	return 0;
}