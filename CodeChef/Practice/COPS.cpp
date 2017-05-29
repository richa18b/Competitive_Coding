#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	long int t;
	int x,y,m,i,ans,houses_covered,pos,flag;
	int a[10],lb[10],ub[10];
	cin>>t;
	while(t--)
	{
		ans=0;flag=0;pos=-1;
		cin>>m>>x>>y;
		for(i=0;i<m;++i)
			cin>>a[i];
		houses_covered=x*y;
		sort(a,a+m);
		memset(lb,0,sizeof(lb));
		memset(ub,0,sizeof(ub));
		for(i=0;i<m;++i)
		{
			lb[i]=a[i]-houses_covered;
			ub[i]=a[i]+houses_covered;
			if(lb[i]<0)
				lb[i]=1;
			if(ub[i]>100)
				ub[i]=100;
			if(lb[i]==1&&ub[i]==100)
				{pos=i;break;}
		}
		for(i=0;i<m-1;++i)
		{
			if(i==pos)
			{
				flag=1;
				break;
			}
			if(lb[i+1]>ub[i])
				ans+=lb[i+1]-ub[i]-1;
		}
		if(!flag&&ub[m-1]<100)
			ans+=100-ub[m-1];
		if(!flag&&lb[0]>1)
			ans+=lb[0]-1;
		cout<<ans<<endl;
	}
	return 0;
}
