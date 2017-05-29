#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	long int h,ts;
	float cc;
	cin>>t;
	while(t--)
	{
		cin>>h>>cc>>ts;
		if(h>50&&cc<0.7&&ts>5600) cout<<"10\n";
		else if(h>50&&cc<0.7) cout<<"9\n";
		else if(cc<0.7&&ts>5600) cout<<"8\n";
		else if(h>50&&ts>5600) cout<<"7\n";
		else if(h>50||cc<0.7||ts>5600) cout<<"6\n";
		else cout<<"5\n";
	}
	return 0;
}