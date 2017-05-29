#include<bits/stdc++.h>
using namespace std;

int findMax(int a[],int n)
{
	map<int,int> m;
	map<int,int>::iterator it;

	int max=a[1],pos=1;
	
	m.insert(pair<int,int> (a[1],1));
	
	for(int i=2;i<=n;++i)
	{
		{
			if(m.find(a[i])!=m.end())
			{ it=m.find(a[i]); it->second++; }
			else m.insert(pair<int,int> (a[i],1));
		}
		
		if(a[i]>max)
		{ max=a[i]; pos=i; }
	}
	
	for(int i=1;i<=n;++i)
	{ 
		it=m.find(a[i]);
		if(it->second>1)
			return -1;
	}
	
	return pos;
}

int main()
{
	int t;
	cin>>t;
	int n;
	while(t--)
	{
		cin>>n;
		int c[n],type,points[n];
		
		map<int,vector<int> > myMap;
		map<int,vector<int> >::iterator itMap;
		
		for(int i=1;i<=n;++i)
		{
			cin>>c[i];
			
			vector<int> v;
			
			for(int j=1;j<=c[i];++j)
			{ cin>>type; v.push_back(type); }
			
			myMap.insert(pair<int,vector<int> > (c[i],v));
		}
		
		for(int i=1;i<=n;++i)
		{
			points[i]=c[i];
			
			map<int,int> m;
			map<int,int>::iterator it;
			
			if(c[i]>3)
			{	
				int r=0;
				for(int j=1;j<=c[i];++j)
				{
					itMap=myMap.find(c[i]);
					if(m.find(itMap->second[r])!=m.end())
					{ it=m.find(itMap->second[r]); it->it++; }
					else m.insert(pair<int,int> (itMap->second[r],1));
					
					r++;
				}
				if(m.size()>3)
				{
					if(m.size()==4)
						points[i]+=1;
					else if(m.size()==5)
						points[i]+=2;
					else if(m.size()==6)
						points[i]+=4;
				}
			}
		}
		
		int winner=findMax(points,n);
		if(winner==1)
			cout<<"chef\n";
		else if(winner==-1)
			cout<<"tie\n";
		else cout<<winner<<"\n";
	}
	return 0;
}