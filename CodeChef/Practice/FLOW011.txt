#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	long int salary;
	cin>>t;
	while(t--)
	{
		cin>>salary;
		if(salary<1500)
			cout<<salary+(0.1*salary)+(0.9*salary)<<endl;
		else cout<<salary+500+(0.98*salary)<<endl;
	}
	return 0;
}