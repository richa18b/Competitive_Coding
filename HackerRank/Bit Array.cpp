{\rtf1\ansi\ansicpg1252\deff0\deflang1033{\fonttbl{\f0\fnil\fcharset0 Calibri;}}
{\*\generator Msftedit 5.41.21.2510;}\viewkind4\uc1\pard\sa200\sl276\slmult1\lang9\f0\fs22 #include<bits/stdc++.h>\par
using namespace std;\par
\par
int main()\par
\{\par
\tab ios_base::sync_with_stdio(0);\par
\tab cin.tie(0);\par
\tab int n,s,p,q,count=0;\par
\tab map<int,int> m;\par
\tab cin>>n>>s>>p>>q;\par
\tab int a[n];\par
\tab a[0]=fmod(s,pow(2,31));\par
\tab for(int i=1;i<n;++i)\par
\tab\tab a[i]=fmod((a[i-1]*p+q),pow(2,31));\par
\tab for(int i=0;i<n;++i)\par
\tab\{\par
\tab\tab if(m.find(a[i])!=m.end())\par
\tab\tab\tab continue;\par
\tab\tab else m.insert(pair<int,int> (a[i],1));\par
\tab\}\par
\tab cout<<m.size();\par
\tab return 0;\par
\}\par
}
 