/* Iterative Tower of Hanoi 
[April 27, 2015] */    
 
#include<bits/stdc++.h> 
using namespace std; 
 
stack<int> s,a,d,t; 
 
void printTowers() 
{ 
   stack<int> temp1=s; 
   stack<int> temp2=a; 
   stack<int> temp3=d; 
   
   cout<<"Source Pole: "; 
   while(!temp1.empty()) 
  { cout<<temp1.top()<<"\n"; temp1.pop(); } 
   
   cout<<"\nAuxiliary Pole: "; 
   while(!temp2.empty()) 
  { cout<<temp2.top()<<"\n"; temp2.pop(); } 
   
   cout<<"\nDestination Pole: "; 
   while(!temp3.empty()) 
  { cout<<temp3.top()<<"\n"; temp3.pop(); } 
} 
 
void towerOfHanoi(int n) 
{ 
   int moves=pow(2,n)-1; 
   
   if(n%2==0) 
  { t=a; a=d; d=t; } 
   
   for(int i=1;i<=moves;++i) 
  { 
     if(i%3==1) 
    {    
       if((!s.empty()&&d.empty())||(!s.empty()&&(!d.empty()&&s.top()<d.top()))) 
      { d.push(s.top()); s.pop(); } 
       else if((!d.empty()&&s.empty())||(!d.empty()&&(!s.empty()&&d.top()<s.top()))) 
      { s.push(d.top()); d.pop(); } 
    } 
     
     else if(i%3==2) 
    {  
       if((!s.empty()&&a.empty())||(!s.empty()&&(!a.empty()&&s.top()<a.top()))) 
      { a.push(s.top()); s.pop(); } 
       else if((!a.empty()&&s.empty())||(!a.empty()&&(!s.empty()&&a.top()<s.top()))) 
      { s.push(a.top()); a.pop(); }  
    } 
     
     else if(i%3==0) 
    {  
       if((!a.empty()&&d.empty())||(!a.empty()&&(!d.empty()&&a.top()<d.top()))) 
      { d.push(a.top()); a.pop(); } 
       else if((!d.empty()&&a.empty())||(!d.empty()&&(!a.empty()&&d.top()<a.top()))) 
      { a.push(d.top()); d.pop(); }  
    } 
  } 
} 
 
int main() 
{ 
   int n=3; 
   for(int i=n;i>0;--i) 
     s.push(i); 
   
   cout<<"Location of disks originally:\n"; 
   printTowers(); 
   
   towerOfHanoi(n); 
   
   cout<<"\n\nLocation of disks after all the moves:\n"; 
   printTowers(); 
   
   return 0; 
}