#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,t,i,j,m,carry,a[200],x;//a can store 200 one digit numbers; m is the digit counter of a
	cin>>t;
	while(t--)
	{
		a[0]=1;
		m=1;
		carry=0;
		cin>>n;
		for(i=1;i<=n;i++)
		{
			for(j=0;j<m;j++)
			{
				x=a[j]*i+carry;
				a[j]=x%10;
				carry=x/10;
			}
			while(carry>0)
			{
				a[m]=carry%10;
				carry=carry/10;
				m++;
			}
		}
		for(i=m-1;i>=0;i--)
			cout<<a[i];
		cout<<endl;
	}
	return 0;
}