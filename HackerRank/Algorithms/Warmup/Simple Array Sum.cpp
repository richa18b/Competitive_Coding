{\rtf1\ansi\ansicpg1252\deff0\deflang1033{\fonttbl{\f0\fnil\fcharset0 Calibri;}}
{\*\generator Msftedit 5.41.21.2510;}\viewkind4\uc1\pard\sa200\sl276\slmult1\lang9\f0\fs22 #include <cmath>\par
#include <cstdio>\par
#include <vector>\par
#include <iostream>\par
#include <algorithm>\par
using namespace std;\par
\par
\par
int main()\{\par
    int n;\par
    cin >> n;\par
    vector<int> arr(n);\par
    vector<int>::iterator it;\par
    for(int arr_i = 0;arr_i < n;arr_i++)\{\par
       cin >> arr[arr_i];\par
    \}\par
    int sum=0;\par
    for(it=arr.begin();it!=arr.end();++it)\par
        sum+=*it;\par
    cout<<sum;\par
    return 0;\par
\}\par
}
 