#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t,i,c=0,j;
	long int n[10];
	cin>>t;
	for(i=0;i<t;i++)
		cin>>n[i];
	for(c=0;c<t;c++)
	//i=n[c];
	//while(i!=n[t-1])
	{
		for(j=1;j<=n[c];j++)
		{
			if((j%3==0)&&(j%5==0))
				cout<<"FizzBuzz\n";
			else 
			{
				if(j%3==0)
					cout<<"Fizz\n";
				else if(j%5==0)
					cout<<"Buzz\n"; 
				else cout<<j<<"\n";
			}
		}
		//i=n[c++];
	}
		return 0;
}