{\rtf1\ansi\ansicpg1252\deff0\deflang1033{\fonttbl{\f0\fnil\fcharset0 Calibri;}}
{\*\generator Msftedit 5.41.21.2510;}\viewkind4\uc1\pard\sa200\sl276\slmult1\lang9\f0\fs22 #include<bits/stdc++.h>\par
using namespace std;\par
\par
void insertionSort(int N, int arr[]) \{\par
    int i,j;\par
    int value;\par
    for(i=1;i<N;i++)\par
    \{\par
        value=arr[i];\par
        j=i-1;\par
        while(j>=0 && value<arr[j])\par
        \{\par
            arr[j+1]=arr[j];\par
            j=j-1;\par
        \}\par
        arr[j+1]=value;\par
    \}\par
    for(j=0;j<N;j++)\par
    \{\par
        printf("%d",arr[j]);\par
        printf(" ");\par
    \}\par
\}\par
int main(void) \{\par
\par
    int N;\par
    scanf("%d", &N);\par
    int arr[N], i;\par
    for(i = 0; i < N; i++) \{\par
        scanf("%d", &arr[i]);\par
    \}\par
\par
    insertionSort(N, arr);\par
\par
    return 0;\par
\}\par
}
 