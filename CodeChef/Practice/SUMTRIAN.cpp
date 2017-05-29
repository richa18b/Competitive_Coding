#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,n,i,j,a[100][100];
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(i=0;i<n;i++)
		{
			for(j=0;j<=i;j++)
				cin>>a[i][j];
		}
		for(i=n-2;i>=0;i--)
		{
			for(j=i;j>=0;j--)
			{
				if(a[i+1][j+1]>a[i+1][j])
					a[i][j]+=a[i+1][j+1];
				else a[i][j]+=a[i+1][j];
			}
		}
		cout<<a[0][0]<<endl;
	}
	return 0;
}