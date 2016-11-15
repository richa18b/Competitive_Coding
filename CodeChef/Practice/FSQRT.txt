#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,ans;
	long int n;
	scanf("%d", &t);
	while(t--)
	{
		scanf("%li", &n);
		ans=sqrt(n);
		printf("%d\n", ans);
	}
	return 0;
}