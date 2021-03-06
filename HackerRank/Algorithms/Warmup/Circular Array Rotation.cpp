{\rtf1\ansi\ansicpg1252\deff0\deflang1033{\fonttbl{\f0\fnil\fcharset0 Calibri;}}
{\*\generator Msftedit 5.41.21.2510;}\viewkind4\uc1\pard\sa200\sl276\slmult1\lang9\f0\fs22 #include<bits/stdc++.h>\par
using namespace std;\par
\par
void reverseArray(int a[],int l,int r)\par
\{\par
    int temp;\par
    while(l<r)\par
    \{\par
        temp=a[l];\par
        a[l]=a[r];\par
        a[r]=temp;\par
        l++;r--;\par
    \}\par
\}\par
\par
void rightCircularRotate(int a[],int n,int d)\par
\{\par
    reverseArray(a,0,d);\par
    reverseArray(a,d+1,n-1);\par
    reverseArray(a,0,n-1);\par
\}\par
\par
int main()\par
\{\par
    int n,k,q;\par
    cin >> n >> k >> q;\par
    \par
    int a[n];\par
    for(int i=0;i<n;++i)\par
        cin>>a[i];\par
   \par
    if(k<n)\par
        rightCircularRotate(a,n,n-1-k);\par
    \par
    if(k>n)\par
        rightCircularRotate(a,n,n-1-(k%n));\par
    \par
    while(q--)\par
    \{\par
        int temp;\par
        cin>>temp;\par
        cout<<a[temp]<<"\\n";\par
    \}\par
    \par
    return 0;\par
\}\par
}
 