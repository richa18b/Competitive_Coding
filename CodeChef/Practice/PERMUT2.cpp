#include<bits/stdc++.h>
using namespace std;

int main()
{
	long int n,a[100000],b[100000];
	int i,j,counter;
	while(n>0)
	{
		cin>>n;
		if(n>0)
		{
			counter=0;
			for(i=1;i<=n;i++)
				cin>>a[i];
			for(i=1;i<=n;i++)
			{
				for(j=1;j<=n;j++)
				{
					if(a[j]==i)
					{
						b[i]=j;
						break;
					}
				}
			}
			for(i=1;i<=n;i++)
			{
				if(a[i]==b[i])
					counter++;
			}
			if(counter==n)
				cout<<"ambiguous"<<endl;
			else cout<<"not ambiguous"<<endl;
		}
	}
	return 0;
}