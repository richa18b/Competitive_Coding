#include<bits/stdc++.h>
using namespace std;

int main()
{
	long int t,n,a[1000000],i;
	scanf("%li", &t);
	while(t--)
	{
		scanf("%li", &n);
		for(i=0;i<n;++i)
			scanf("%li", &a[i]);
		sort(a,a+n);
		printf("%li\n", a[0]+a[1]);
	}
	return 0;
}