{\rtf1\ansi\ansicpg1252\deff0\deflang1033{\fonttbl{\f0\fnil\fcharset0 Calibri;}}
{\*\generator Msftedit 5.41.21.2510;}\viewkind4\uc1\pard\sa200\sl276\slmult1\lang9\f0\fs22 #include<bits/stdc++.h>\par
using namespace std;\par
\par
int main()\par
\{\par
    int a[3],b[3],sum1=0,sum2=0;\par
    for(int i=0;i<3;++i)\par
        cin>>a[i];\par
    for(int i=0;i<3;++i)\par
    \{\par
        cin>>b[i];\par
        if(a[i]>b[i])\par
            sum1++;\par
        else if(b[i]>a[i])\par
            sum2++;\par
    \}\par
    \par
    cout<<sum1<<" "<<sum2;\par
    return 0;\par
\}\par
}
 