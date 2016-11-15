/*Nested for loops problem in other PERMUT2 codes*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
	long int n,a[100000],b[100000];
	int i,flag;
	while(n>0)
	{
		cin>>n;
		if(n>0)
		{
			flag=0;
			for(i=1;i<=n;i++)
				cin>>a[i];
			for(i=1;i<=n;i++)
				b[a[i]]=i;
			for(i=1;i<=n;i++)
			{
				if(a[i]!=b[i])
				{
					flag=1;
					break;
				}
			}
			if(!flag)
				cout<<"ambiguous"<<endl;
			else cout<<"not ambiguous"<<endl;
		}
	}
	return 0;
}