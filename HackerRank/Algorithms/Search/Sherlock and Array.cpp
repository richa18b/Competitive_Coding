{\rtf1\ansi\ansicpg1252\deff0\deflang1033{\fonttbl{\f0\fnil\fcharset0 Calibri;}}
{\*\generator Msftedit 5.41.21.2510;}\viewkind4\uc1\pard\sa200\sl276\slmult1\lang9\f0\fs22 #include<bits/stdc++.h>\par
using namespace std;\par
\par
int main()\par
\{\par
    int t;\par
    cin>>t;\par
    while(t--)\par
    \{\par
        int n;\par
        cin>>n;\par
        int a[n],leftSum[n],rightSum[n];\par
        leftSum[0]=0;\par
        for(int i=0;i<n;++i)\par
        \{\par
            cin>>a[i];\par
            if(i>0)\par
                leftSum[i]=a[i-1]+leftSum[i-1];\par
        \}\par
        \par
        rightSum[n-1]=0;\par
        for(int i=1;i<n;++i)\par
            rightSum[n-1-i]=a[n-i]+rightSum[n-i];\par
           \par
        int flag=0;\par
        \par
        for(int i=0;i<n;++i)\par
            if(leftSum[i]==rightSum[i])\par
            \{ flag=1; cout<<"YES\\n"; break; \}\par
        \par
        if(!flag)\par
            cout<<"NO\\n";\par
    \}\par
    return 0;\par
\}\par
}
 