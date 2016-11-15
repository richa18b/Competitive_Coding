#include<bits/stdc++.h>
using namespace std;

int main()
{
	long int t,q,p;
	double cost;
	scanf("%li", &t);
	while(t--)
	{
		cost=1;
		scanf("%li %li", &q,&p);
		cost=q*p;
		if(q>1000)
			cost=0.9*cost;
		printf("%lf\n", cost);
	}
	return 0;
}