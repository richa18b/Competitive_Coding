{\rtf1\ansi\ansicpg1252\deff0\deflang1033{\fonttbl{\f0\fnil\fcharset0 Calibri;}}
{\*\generator Msftedit 5.41.21.2510;}\viewkind4\uc1\pard\sa200\sl276\slmult1\lang9\f0\fs22 #include<bits/stdc++.h>\par
using namespace std;\par
\par
void printArray(int a[],int n)\par
\{\par
    for(int i=0;i<n;++i)\par
        cout<<a[i]<<" ";\par
    \par
    cout<<"\\n";\par
\}\par
\par
int main() \par
\{\par
    int n;\par
    cin>>n;\par
    int a[n];\par
    for(int i=0;i<n;++i)\par
        cin>>a[i];\par
    for(int i=1;i<n;++i)\par
    \{\par
        int j=i;\par
        \par
        while(j>=0&&a[j]<a[j-1])\par
        \{ swap(a[j-1],a[j]); j--; \}\par
        \par
        printArray(a,n);\par
    \}\par
   \par
   return 0;\par
\}\par
}
 