{\rtf1\ansi\ansicpg1252\deff0\deflang1033{\fonttbl{\f0\fnil\fcharset0 Calibri;}}
{\*\generator Msftedit 5.41.21.2510;}\viewkind4\uc1\pard\sa200\sl276\slmult1\lang9\f0\fs22 #include<bits/stdc++.h>\par
using namespace std;\par
\par
vector<int> va;\par
vector<int> vt;\par
\par
int rotationsReqd(char dir[],int blocks[],int m)\par
\{\par
\tab for(int i=0;i<m;++i)\par
\tab\{\par
\tab\tab if(dir[i]=='R')\par
\tab\tab\tab rotate(va.begin(),va.end()-blocks[i],va.end());\par
\tab\tab\par
\tab\tab else if(dir[i]=='L')\par
\tab\tab\tab rotate(va.begin(),va.begin()+blocks[i],va.end());\par
\tab\tab\par
\tab\tab if(va==vt)\par
\tab\tab\tab return i+1;\par
\tab\}\par
\tab return -1;\par
\}\par
\par
int main()\par
\{\par
\tab ios_base::sync_with_stdio(0);\par
\tab cin.tie(0);\par
\tab\par
\tab int n,m;\par
\tab cin>>n>>m;\par
\tab\par
\tab int a[n],t[n];\par
\tab for(int i=0;i<n;++i)\par
\tab\{\par
\tab\tab cin>>a[i];\par
\tab\tab va.push_back(a[i]);\par
\tab\}\par
\tab\par
\tab for(int i=0;i<n;++i)\par
\tab\{\par
\tab\tab cin>>t[i];\par
\tab\tab vt.push_back(t[i]);\par
\tab\}\par
\tab\par
\tab char dir[m];\par
\tab int blocks[m];\par
\tab for(int i=0;i<m;++i)\par
\tab\tab cin>>dir[i]>>blocks[i];\par
\tab\tab\par
\tab cout<<rotationsReqd(dir,blocks,m);\par
\tab\par
\tab return 0;\par
\}\par
}
 