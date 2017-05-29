#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
	if(b!=0)
		return gcd(b,a%b);
	else return a;
}

int main()
{
	int t,i,n,g;
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d", &n);
		vector<int> vec(n);
		for(i=0;i<n;++i)
			scanf("%d", &vec[i]);
		g=vec[0];
		for(i=1;i<n;++i)
			g=gcd(g,vec[i]);
		for(i=0;i<n;++i)
			printf("%d ", vec[i]/g);
		printf("\n");
	}
}