#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,b,ls;
	float rs1,rs2,ls2,b2;
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d %d", &b,&ls);
		b2=pow(b,2);
		ls2=pow(ls,2);
		rs1=sqrt(ls2-b2);
		rs2=sqrt(ls2+b2);
		printf("%g %g", rs1,rs2);/*by %f 3.000000;by %g 3*/
		printf("\n");
	}
	return 0;
}