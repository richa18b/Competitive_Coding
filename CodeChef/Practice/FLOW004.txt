#include<bits/stdc++.h>
using namespace std;
     
int main()
{
    	long int t,n;
    	int last,temp;
    	scanf("%li", &t);
    	while(t--)
    	{
    		scanf("%li", &n);
    		last=n%10;
    		while(n>0)
    		{
    			temp=n%10;
    			n=n/10;
    		}
    		printf("%d\n", temp+last);
    	}
    	return 0;
}