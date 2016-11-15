#include<bits/stdc++.h>
using namespace std;

int main()
{
	long int t,a[3],i;
	scanf("%li", &t);
	while(t--)
	{
		for(i=0;i<3;++i)
			scanf("%li", &a[i]);
		sort(a,a+3);
		printf("%li\n", a[1]);
	}
	return 0;
}