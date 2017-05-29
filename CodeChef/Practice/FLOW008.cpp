#include<bits/stdc++.h>
using namespace std;

int main()
{
	long int t;
	int n;
	scanf("%li", &t);
	while(t--)
	{
		scanf("%d", &n);
		if(n<10)
			printf("What an obedient servant you are!\n");
		else printf("-1\n");
	}
	return 0;
}