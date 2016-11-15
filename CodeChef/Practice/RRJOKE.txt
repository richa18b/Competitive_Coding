#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,n,i,result;
	long int px,py;
	scanf("%d", &t);
	while(t--)
	{
		result=0;
		scanf("%d", &n);
		for(i=1;i<=n;++i)
		{
			scanf("%li %li", &px,&py);
			result^=i;
		}
		printf("%d\n", result);
	}
	return 0;
}