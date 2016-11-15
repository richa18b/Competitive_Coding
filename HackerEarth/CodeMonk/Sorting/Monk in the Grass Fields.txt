#include<bits/stdc++.h>
using namespace std;

typedef long long LL;

const int N = 1005;

int a[N][N];
LL r[N], c[N], sr[N * 1000], sc[N * 1000];

int main() 
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
  int t;
  cin>>t;
  while(t--)
  {
    memset(r,0,sizeof(r));
    memset(c,0,sizeof(c));
    memset(sr,0,sizeof(sr));
    memset(sc,0,sizeof(sc));
  int n, k;
  cin>>n>>k;
vector<int> qr, qc;
  for (int i = 1; i <= n; ++i)
    for (int j = 1; j <= n; ++j) 
    {
      cin>>a[i][j];
      r[i] += a[i][j];
      c[j] += a[i][j];
    }
  for (int i = 1; i <= n; ++i)  qr.push_back(r[i]);
  for (int j = 1; j <= n; ++j)  qc.push_back(c[j]);
  
  for (int i = 1; i <= k; ++i) 
  {
    sort(qr.begin(),qr.end());
    sort(qc.begin(),qc.end());
    int t = qr[0];
    qr[0]=t + n;
    sr[i] = sr[i - 1] + t;
    t = qc[0];
    sc[i] = sc[i - 1] + t;
    qc[0]=t + n;
  }
  LL ans = 1e18;
  for (int i = 0; i <= k; ++i)  ans = min(ans, sr[i] + sc[k - i] + (LL)i * (k - i));
  cout<<ans<<"\n";
  }
  return 0;
}