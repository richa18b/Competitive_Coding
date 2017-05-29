#include<bits/stdc++.h>
using namespace std;

#define ll long long

const int MAX1=1000005,MAX=100005;

long int w[MAX],frequency[MAX1],Aux[MAX],copied[MAX];
int t,n;
ll inv;

void merge(int start,int mid,int end)
{
	int p=start,q=mid+1,k=0,count=0,i;
	for(i=start;i<=end;++i)
	{
		if(p>mid)
			Aux[k++]=w[q++];
		else if(q>end)
		{
			Aux[k++]=w[p];
			frequency[w[p]]+=count;
			p++;
		}
		else if(w[p]<=w[q])
		{
			Aux[k++]=w[p];
			frequency[w[p]]+=count;
			p++;
		}
		else
		{
			Aux[k++]=w[q++];
			inv+=mid-p+1;
			count++;
		}
	}
	for(i=0;i<k;++i)
		w[start++]=Aux[i];
}

void merge_sort(int start,int end)
{
	if(start<end)
	{
		int mid=(start+end)/2;
		merge_sort(start,mid);
		merge_sort(mid+1,end);
		merge(start,mid,end);
	}
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int i;
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(i=0;i<MAX1;++i)
			frequency[i]=0;
		for(i=0;i<n;++i)
		{
			cin>>w[i];
			copied[i]=w[i];
		}
		merge_sort(0,n-1);
		inv=0;
		for(i=0;i<n;++i)
			cout<<frequency[copied[i]]<<" ";
		cout<<"\n";
	}
}