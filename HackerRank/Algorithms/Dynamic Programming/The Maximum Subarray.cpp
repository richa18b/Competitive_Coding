{\rtf1\ansi\ansicpg1252\deff0\deflang1033{\fonttbl{\f0\fnil\fcharset0 Calibri;}}
{\*\generator Msftedit 5.41.21.2510;}\viewkind4\uc1\pard\sa200\sl276\slmult1\lang9\f0\fs22 #include<bits/stdc++.h>\par
using namespace std;\par
\par
bool allPositive(int a[],int n)\par
\{\par
    for(int i=0;i<n;++i)\par
        if(a[i]<0)\par
            return false;\par
        \par
    return true;\par
\}\par
\par
bool allNegative(int a[],int n)\par
\{\par
    for(int i=0;i<n;++i)\par
        if(a[i]>0)\par
            return false;\par
        \par
    return true;\par
\}\par
\par
int maximum(int a[],int n)\par
\{\par
    int max=a[0];\par
    for(int i=1;i<n;++i)\par
        if(a[i]>max)\par
            max=a[i];\par
    \par
    return max;\par
\}\par
\par
int func1(int a[],int n)\par
\{\par
    int max_so_far=a[0];\par
    int curr_max=a[0];\par
    \par
    for(int i=1;i<n;++i)\par
    \{\par
        curr_max=max(a[i],curr_max+a[i]);\par
        max_so_far=max(max_so_far,curr_max);\par
    \}\par
    return max_so_far;\par
\}\par
\par
int func2(int a[],int n)\par
\{\par
    int sum=0;\par
    for(int i=0;i<n;++i)\par
        if(a[i]>0)\par
            sum+=a[i];\par
 \par
    return sum;\par
\}\par
\par
int main()\par
\{\par
    int t,n;\par
    cin>>t;\par
    while(t--)\par
    \{\par
        cin>>n;\par
        int a[n];\par
        for(int i=0;i<n;++i)\par
            cin>>a[i];\par
        int ans1=func1(a,n);\par
        int ans2;\par
        if(allPositive(a,n))\par
            ans2=ans1;\par
        else \par
        \{\par
            if(allNegative(a,n))\par
                ans2=maximum(a,n);\par
            else ans2=func2(a,n);\par
        \}\par
\par
        cout<<ans1<<" "<<ans2<<"\\n";\par
    \}\par
    return 0;\par
\}\par
}
 