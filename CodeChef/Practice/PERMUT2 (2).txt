#include<bits/stdc++.h>
using namespace std;

int main()
{
	long int n,a[100000],b[100000];
	int i,j,counter,c;
	while(n>0)
	{
		cin>>n;
		if(n>0)
		{
			counter=0;c=1;
			for(i=1;i<=n;i++)
				cin>>a[i];
			while(c<=n)
			{
				for(i=1;i<=n;i++)
				{
					if(a[i]==c&&i!=a[c])
					{
						counter++;c++;
						break;
					}
				}
			}
			if(counter==n)
				cout<<"ambiguous"<<endl;
			else cout<<"not ambiguous"<<endl;
		}
	}
	return 0;
}