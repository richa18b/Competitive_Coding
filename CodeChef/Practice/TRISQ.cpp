#include<bits/stdc++.h>
using namespace std;

int main()
{
	long int t,b;
	int ans;
	scanf("%li", &t);
	while(t--)
	{
		scanf("%li", &b);
		ans=((b/2)*(b/2)-(b/2))/2;
		printf("%d\n", ans);
	}
	return 0;
}