{\rtf1\ansi\ansicpg1252\deff0\deflang1033{\fonttbl{\f0\fnil\fcharset0 Calibri;}}
{\*\generator Msftedit 5.41.21.2510;}\viewkind4\uc1\pard\sa200\sl276\slmult1\lang9\f0\fs22 // Equal Stacks \par
\par
#include<bits/stdc++.h>\par
using namespace std;\par
\par
void calcSum(int a[],int n,int sum[])\par
\{\par
\tab int k=0;\par
    for(int i=n-1;i>=0;--i)\par
    \{\par
        if(i==n-1)\par
            sum[k]=a[i];\par
        else sum[k]=a[i]+sum[k-1];\par
        k++;\par
    \}\par
\}\par
\par
int main()\par
\{\par
    ios_base::sync_with_stdio(0);\par
    cin.tie(0);\par
    int n1,n2,n3;\par
    cin>>n1>>n2>>n3;\par
    int s1[n1],s2[n2],s3[n3],sum1[n1],sum2[n2],sum3[n3];\par
    \par
    for(int i=0;i<n1;++i)\par
        cin>>s1[i];\par
    for(int i=0;i<n2;++i)\par
        cin>>s2[i];\par
    for(int i=0;i<n3;++i)\par
        cin>>s3[i];\par
        \par
    calcSum(s1,n1,sum1);\par
    calcSum(s2,n2,sum2);\par
    calcSum(s3,n3,sum3);\par
    \par
    int i=n1-1,j=n2-1,k=n3-1;\par
    while(sum1[i]!=sum2[j]&&sum2[j]!=sum3[k])\par
    \{\par
    \tab if(sum1[i]>sum2[j]&&sum1[i]>sum3[k])\par
    \tab\{ i--; continue; \}\par
    \tab else if(sum2[j]>sum1[i]&&sum2[j]>sum3[k])\par
    \tab\{ j--; continue; \}\par
    \tab else if(sum3[k]>sum1[i]&&sum3[k]>sum2[j])\par
    \tab\{ k--; continue; \}\par
    \}\par
    cout<<sum1[i];\par
    return 0;\par
\}\par
}
 