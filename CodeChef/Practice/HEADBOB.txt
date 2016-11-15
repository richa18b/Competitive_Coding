#include<bits/stdc++.h>
using namespace std;

int main()
{
	long int t,n,i,count_n;
	string str;
	scanf("%li", &t);
	while(t--)
	{
		count_n=0;
		scanf("%li", &n);
		cin>>str;
		for(i=0;i<n;++i)
		{
			if(str[i]=='I')
			{
				printf("INDIAN\n");
				break;
			}
			else if(str[i]=='Y')
			{
				printf("NOT INDIAN\n");
				break;
			}
			else if(str[i]=='N')
					count_n++;
		}
		if(count_n==n)
			printf("NOT SURE\n");
	}
	return 0;
}