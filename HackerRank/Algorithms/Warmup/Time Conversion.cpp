{\rtf1\ansi\ansicpg1252\deff0\deflang1033{\fonttbl{\f0\fnil\fcharset0 Calibri;}}
{\*\generator Msftedit 5.41.21.2510;}\viewkind4\uc1\pard\sa200\sl276\slmult1\lang9\f0\fs22 #include<bits/stdc++.h>\par
using namespace std;\par
\par
int main()\par
\{\par
    string time;\par
    cin >> time;\par
    string hh="";\par
    int hh2;\par
    for(int i=0;i<2;++i)\par
        hh+=time[i];\par
    \par
    if(hh=="01")\par
    \{ (time[8]=='P')? hh2=13:hh2=01; \}\par
    else if(hh=="02") \par
    \{ (time[8]=='P')? hh2=14:hh2=02; \}\par
    else if(hh=="03") \par
    \{ (time[8]=='P')? hh2=15:hh2=03; \}\par
    else if(hh=="04") \par
    \{ (time[8]=='P')? hh2=16:hh2=04; \}\par
    else if(hh=="05") \par
    \{ (time[8]=='P')? hh2=17:hh2=05; \}\par
    else if(hh=="06") \par
    \{ (time[8]=='P')? hh2=18:hh2=06; \}\par
    else if(hh=="07") \par
    \{ (time[8]=='P')? hh2=19:hh2=07; \}\par
    else if(hh=="08") \par
    \{ (time[8]=='P')? hh2=20:hh2=8; \}\par
    else if(hh=="09") \par
    \{ (time[8]=='P')? hh2=21:hh2=9; \}\par
    else if(hh=="10") \par
    \{ (time[8]=='P')? hh2=22:hh2=10; \}\par
    else if(hh=="11") \par
    \{ (time[8]=='P')? hh2=23:hh2=11; \}\par
    else if(hh=="12") \par
    \{ (time[8]=='P')? hh2=12:hh2=0; \}\par
    \par
    if(hh[0]=='0'&&time[8]!='P')\par
        cout<<"0";\par
    if(hh=="12"&&time[8]!='P')\par
        cout<<"0";\par
    cout<<hh2<<":";\par
    for(int i=3;i<time.length()-2;++i)\par
        cout<<time[i];\par
    \par
    return 0;\par
\}\par
}
 