#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	long int a,b;
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d %d", &a,&b);
/*To minimize aUb, make either a or b a subset of the other set.
So, min(aUb)=max(a,b)*/
		if(a>b)
			printf("%li ", a);
		else printf("%li ", b);
/*To maximize aUb, make al^lb=0. So,max(aUb)=a+b*/
		printf("%li\n", a+b);
	}
	return 0;
}