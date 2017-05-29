#include<bits/stdc++.h>
using namespace std;

long int n;

int search(long int i,long int r[])
{
	long int j;
	int flag=0;
	sort(r,r+n);
	j=2;
	while(i!=r[j]&&j<=n)
	{
		j++;
	}
	if(j==n+1)
		flag=1;
	return flag;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	long int i;
	cin>>n;
	long int r[n];
	for(i=1;i<=n;++i)
		cin>>r[i];
	for(i=1;i<=n;++i)
	{
		if (search(i,r)==1)
			cout<<i<<" ";
	}
	return 0;
}