{\rtf1\ansi\ansicpg1252\deff0\deflang1033{\fonttbl{\f0\fnil\fcharset0 Calibri;}}
{\*\generator Msftedit 5.41.21.2510;}\viewkind4\uc1\pard\sa200\sl276\slmult1\lang9\f0\fs22 #include<bits/stdc++.h>\par
using namespace std;\par
\par
int main()\par
\{\par
\tab int n,x;\par
\tab cin>>n>>x;\par
\tab int a[n];\par
\tab int cnt=0;\par
\tab int flag=0;\par
\tab for(int i=0;i<n;++i)\par
\tab\{\par
\tab\tab cin>>a[i];\par
\tab\tab if(flag<=1&&a[i]<=x)\par
\tab\tab\tab cnt++;\par
\tab\tab if(a[i]>x)\par
\tab\tab\tab flag++;\par
\tab\}\par
\tab cout<<cnt;\par
\tab return 0;\par
\}\par
}
 