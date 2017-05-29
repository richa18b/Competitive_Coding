#include<bits/stdc++.h>
 
#define mem(x,y) memset(x,y,sizeof(x))
#define max(a,b) ((a>b)?a:b)
#define min(a,b) ((a<b)?a:b)
#define diff(a,b) ((a<b)?b-a:a-b)
#define clrstr(a) memset(a,'\0',sizeof(a))
#define CLR(x) memset(x,0,sizeof(x))
#define SET(x) memset(x,-1,sizeof(x))
#define pb(a) push_back(a)
#define PCS(ks,ans) cout<<"Case "<<ks<<": "<<ans<<endl;
#define PC(ks) cout<<"Case "<<ks<<": ";
#define pi 2*acos(0)
#define EPS 1e-9
#define inf 10000000
#define MX 100000
#define SI(a) scanf("%d",&a)
#define SI2(a,b) scanf("%d %d",&a,&b)
#define PPI(a) printf("%d\n",a)
 
using namespace std;
 
string str;
int a[26];
 
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	long int t;
	int len,i;
	bool check;
	cin>>t;
	while(t--)
	{
		
		check=0;
		cin>>str;
		len=str.size();
		CLR(a);
		for(i=0;i<len;++i)
			a[str[i]-'a']++;
		for(i=0;i<26;i++)
			if(a[i]==len-a[i])
			{
				cout<<"YES\n";
				check=1;
				break;
			}
		if(!check)
			cout<<"NO\n";
	}
	return 0;
}