{\rtf1\ansi\ansicpg1252\deff0\deflang1033{\fonttbl{\f0\fnil\fcharset0 Calibri;}}
{\*\generator Msftedit 5.41.21.2510;}\viewkind4\uc1\pard\sa200\sl276\slmult1\lang9\f0\fs22 #include<bits/stdc++.h>\par
using namespace std;\par
\par
long long int calc_f(long long int a[],long int n,long int l,long int r)\par
\{\par
\tab long long int res=1;long int i=0;\par
\tab while((l+3*i)<=r)\par
\tab\{\par
\tab\tab res*=a[l+(3*i)];\par
\tab\tab i++;\par
\tab\}\par
\tab return res;\par
\}\par
\par
long long int calc_s(long long int a[],long int n,long int l,long int r)\par
\{\par
\tab long long int res=0;long int i=0;\par
\tab while((l+1+3*i)<=r)\par
\tab\{\par
\tab\tab res+=a[l+1+(3*i)];\par
\tab\tab i++;\par
\tab\}\par
\tab return res;\par
\}\par
\par
long long int calc_t(long long int a[],long int n,long int l,long int r)\par
\{\par
\tab long long int res=0;long int i=0;\par
\tab while((l+2+3*i)<=r)\par
\tab\{\par
\tab\tab res+=a[l+2+(3*i)];\par
\tab\tab i++;\par
\tab\}\par
\tab return res;\par
\}\par
\par
int main()\par
\{\par
\tab long int n,q,l,r;\par
\tab cin>>n;\par
\tab long long int a[n];\par
\tab for(int i=1;i<=n;++i)\par
\tab\tab cin>>a[i];\par
\tab cin>>q;\par
\tab while(q--)\par
\tab\{\par
\tab\tab cin>>l>>r;\par
\tab\tab long long int f=calc_f(a,n,l,r);\par
\tab\tab long long int s=calc_s(a,n,l,r);\par
\tab\tab long long int t=calc_t(a,n,l,r);\par
\tab\tab cout<<fmod((f+s-t),(pow(10,9)+7))<<"\\n";\par
\tab\}\par
\tab return 0;\par
\}\par
}
 