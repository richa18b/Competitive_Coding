{\rtf1\ansi\ansicpg1252\deff0\deflang1033{\fonttbl{\f0\fnil\fcharset0 Calibri;}}
{\*\generator Msftedit 5.41.21.2510;}\viewkind4\uc1\pard\sa200\sl276\slmult1\lang9\f0\fs22 #include<bits/stdc++.h>\par
using namespace std;\par
\par
int main() \par
\{\par
    int p,n;\par
    cin>>n;\par
    int a[n];\par
    for(int i=0;i<n;++i)\par
        cin>>a[i];\par
    \par
    p=a[0];\par
    \par
    vector<int> left;\par
    vector<int> right;\par
    vector<int> equal;\par
    \par
    vector<int>::iterator it;\par
    \par
    equal.push_back(p);\par
    \par
    for(int i=1;i<n;++i)\par
    \{\par
        if(a[i]<p)\par
            left.push_back(a[i]);\par
        else if(a[i]>p)\par
            right.push_back(a[i]);\par
        else equal.push_back(a[i]);\par
    \}\par
    \par
    for(it=left.begin();it!=left.end();++it)\par
        cout<<*it<<" ";\par
    for(it=equal.begin();it!=equal.end();++it)\par
        cout<<*it<<" ";\par
    for(it=right.begin();it!=right.end();++it)\par
        cout<<*it<<" ";\par
   \par
   return 0;\par
\}\par
}
 