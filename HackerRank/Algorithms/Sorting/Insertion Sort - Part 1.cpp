{\rtf1\ansi\ansicpg1252\deff0\deflang1033{\fonttbl{\f0\fnil\fcharset0 Calibri;}}
{\*\generator Msftedit 5.41.21.2510;}\viewkind4\uc1\pard\sa200\sl276\slmult1\lang9\f0\fs22 #include<bits/stdc++.h>\par
using namespace std;\par
\par
void printArray(int a[],int n)\par
\{\par
    for(int i=0;i<n;++i)\par
        cout<<a[i]<<" ";\par
    \par
    cout<<"\\n"; \par
\}\par
\par
void insertionSort(int a[],int n) \par
\{\par
    int temp=a[n-1],flag=0;\par
    for(int i=n-2;i>=0;--i)\par
    \{\par
        if(temp<a[i])\par
        \{ a[i+1]=a[i]; printArray(a,n);\}\par
        else\par
        \{ a[i+1]=temp; printArray(a,n); flag=1; break; \}\par
    \}\par
    \par
    if(!flag)\par
    \{ a[0]=temp; printArray(a,n); \}\par
\}\par
\par
int main() \par
\{\par
    int temp,n;\par
    cin>>n;\par
    int a[n];\par
    for(int i=0;i<n;++i)\par
        cin>>a[i];\par
    insertionSort(a,n);\par
    return 0;\par
\}\par
}
 