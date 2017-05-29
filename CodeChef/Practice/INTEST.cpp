#include<bits/stdc++.h>
using namespace std;

int main() 
{
	size_t n_memb; 
	int n,k,count=0,i,num;
	char buf[BUFSIZ];
	cin>>n>>k;
	while(getchar()!='\n');
	do
	{
		n_memb=fread(buf,1,BUFSIZ,stdin);
		for(i=0;i<n_memb;i++)
		{
			if(buf[i]!='\n')
				num=num*10+(buf[i]-'0');
			else
			{
				if(num%k==0)
					count++;
				num=0;
			}
		}
	}while(n_memb==BUFSIZ);
	cout<<count;
	return 0;
}
