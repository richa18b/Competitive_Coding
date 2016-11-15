#include<bits/stdc++.h>
using namespace std;

int main()
{
	int i=0,len;
	long int t,a[1000000];
	cin>>t;
	while(t--)
	{
		cin>>a[i];
		i++;
	}
	len=i;
	sort(a,a+len);
	for(i=0;i<len;i++)
		cout<<a[i]<<endl;
	return 0;
}