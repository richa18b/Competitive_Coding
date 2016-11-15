#include <iostream>

using namespace std;


int main() 

{
	
	long int t;
	
	long long int n,s=0;
	
	cin>>t;
	
	while(t--)
	
	{
		
		cin>>n;
		
		s=0;
		
		while(n>0)
		
		{
			
			s=s+(n/5);
						n=n/5;
		
		}
		
		cout<<s<<endl;
	
	}

	
	return 0;

}