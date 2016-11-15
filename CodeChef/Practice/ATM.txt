#include<bits/stdc++.h>
using namespace std;

int main() 
{
	int n1;
	float n2;
	cin>>n1>>n2;
	cout.setf(ios::fixed);
	if(((n1+0.50)<=n2)&&(n1%5==0))
		cout<<setprecision(2)<<(float)(n2-n1-0.50);
	else cout<<setprecision(2)<<(float)n2;
	return 0;
}