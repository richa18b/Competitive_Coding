{\rtf1\ansi\ansicpg1252\deff0\deflang1033{\fonttbl{\f0\fnil\fcharset0 Calibri;}}
{\*\generator Msftedit 5.41.21.2510;}\viewkind4\uc1\pard\sa200\sl276\slmult1\lang9\f0\fs22 #include <sstream>\par
#include <vector>\par
#include <iostream>\par
using namespace std;\par
\par
vector<int> parseInts(string str) \par
\{\par
    stringstream ss(str);\par
    char ch;\par
    int temp;\par
    vector<int> v;\par
    while(ss>>temp)\par
    \{\par
        v.push_back(temp);\par
        ss>>ch;\par
    \}\par
    return v;\par
\}\par
\par
int main() \{\par
    string str;\par
    cin >> str;\par
    vector<int> integers = parseInts(str);\par
    for(int i = 0; i < integers.size(); i++) \{\par
        cout << integers[i] << "\\n";\par
    \}\par
    \par
    return 0;\par
\}\par
}
 