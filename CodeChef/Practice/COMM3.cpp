#include<bits/stdc++.h>
using namespace std;
     
int main()
{
	int t,i;
    	float ab,bc,ca;
    	long int r,a[2],b[2],c[2];
    	scanf("%d", &t);
    	while(t--)
    	{
    		scanf("%li", &r);
    		for(i=0;i<2;i++)
    			scanf("%li", &a[i]);
    		for(i=0;i<2;i++)
    			scanf("%li", &b[i]);
    		for(i=0;i<2;i++)
    			scanf("%li", &c[i]);
    		ab=sqrt(pow((a[1]-b[1]),2)+pow((a[0]-b[0]),2));
    		bc=sqrt(pow((b[1]-c[1]),2)+pow((b[0]-c[0]),2));
    		ca=sqrt(pow((c[1]-a[1]),2)+pow((c[0]-a[0]),2));
    		if((ab<=r&&bc<=r)||(bc<=r&&ca<=r)||(ca<=r&&ab<=r))
    			printf("yes\n");
    		else printf("no\n");
    	}
    	return 0;
    } 