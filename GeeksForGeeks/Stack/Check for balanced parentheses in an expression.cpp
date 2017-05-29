/* Check for balanced parentheses in an expression 
[April 12, 2010] */    
 
#include<bits/stdc++.h> 
using namespace std; 
 
bool balancedParenthesis(char exp[],int n) 
{ 
   stack<char> myStack; 
   
   for(int i=0;i<n;++i) 
  { 
     if( (!myStack.empty()) && ( (myStack.top()=='('&&exp[i]==')') || (myStack.top           ()=='['&&exp[i]==']') || (myStack.top()=='{'&&exp[i]=='}') ) ) 
       myStack.pop(); 
     else   
       myStack.push(exp[i]); 
  } 
   
   if(myStack.empty()) 
     return true; 
   
   return false; 
} 
 
int main() 
{ 
   char exp[]={'[','(',')',']','{','}','{','[','(',')','(',')',']','(',')','}'}; 
   int n=sizeof(exp)/sizeof(exp[0]); 
   if(balancedParenthesis(exp,n)) 
     cout<<"true"; 
   else cout<<"false"; 
   
   return 0; 
} 