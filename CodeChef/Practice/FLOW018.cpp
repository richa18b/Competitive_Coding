#include<bits/stdc++.h>
using namespace std;
     
int main()
{
    	long int t;
    	long long int fact;
    	int n,i;
    	scanf("%li", &t);
    	while(t--)
    	{
    		fact=1;
    		scanf("%d", &n);
    		for(i=n;i>=1;i--)
    		{
    			fact*=i;
    		}
    		printf("%lli\n", fact);
    	}
    	return 0;
}