{\rtf1\ansi\ansicpg1252\deff0\deflang1033{\fonttbl{\f0\fnil\fcharset0 Calibri;}}
{\*\generator Msftedit 5.41.21.2510;}\viewkind4\uc1\pard\sa200\sl276\slmult1\lang9\f0\fs22 #include<bits/stdc++.h>\par
using namespace std;\par
\par
#define MAX_SIZE 100000000\par
\par
int a[MAX_SIZE];\par
\par
int main()\par
\{\par
    ios_base::sync_with_stdio(0);\par
    cin.tie(0);\par
    int n;\par
    vector<int> v;\par
    cin>>n;\par
    for(int i=0;i<n;++i)\par
    \{ cin>>a[i]; v.push_back(a[i]); \}\par
    sort(v.begin(),v.end());\par
    vector<int>::iterator it;\par
    for(it=v.begin();it!=v.end();++it)\par
        cout<<*it<<" ";\par
    return 0;\par
\}\par
}
 