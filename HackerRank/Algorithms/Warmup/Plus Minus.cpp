{\rtf1\ansi\ansicpg1252\deff0\deflang1033{\fonttbl{\f0\fnil\fcharset0 Calibri;}}
{\*\generator Msftedit 5.41.21.2510;}\viewkind4\uc1\pard\sa200\sl276\slmult1\lang9\f0\fs22 #include<bits/stdc++.h>\par
using namespace std;\par
\par
int main()\par
\{\par
    int n,count1=0,count2=0,count3=0;\par
    cin >> n;\par
    int a[n];\par
    for(int i=0;i<n;++i)\par
    \{\par
        cin>>a[i];\par
        if(a[i]>0) count1++;\par
        else if(a[i]<0) count2++;\par
        else count3++;\par
    \}\par
    \par
    float d1,d2,d3;\par
    d1=(float)count1/n;\par
    d2=(float)count2/n;\par
    d3=(float)count3/n;\par
    \par
    cout<<fixed<<setprecision(6)<<d1<<"\\n"<<d2<<"\\n"<<d3;\par
    return 0;\par
\}\par
}
 