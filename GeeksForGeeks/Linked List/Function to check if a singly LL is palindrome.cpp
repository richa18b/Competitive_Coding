/* Function to check if a singly linked list is palindrome 
[August 13, 2009] */    
 
//Method 1 (Using a stack): O(n) time complexity & O(n) extra space 

#include<bits/stdc++.h> 
using namespace std; 
  
struct node 
{ 
   char data; 
   struct node* next; 
}; 
  
bool isPalindrome(struct node* head) 
{ 
   struct node* current=head; 
   struct node* temp=head; 
  
   stack<char> myStack; 
  
   while(current!=NULL) 
  { 
     myStack.push(current->data); 
     current=current->next; 
  } 
  
   while(!myStack.empty()) 
  { 
     if(temp->data!=myStack.top()) 
       return false; 
     temp=temp->next; 
     myStack.pop(); 
  } 
   return true; 
} 
  
void push(struct node*& head,char data) 
{ 
   struct node* newNode=(struct node*)malloc(sizeof(struct node)); 
  
   newNode->data=data; 
   newNode->next=head; 
   head=newNode; 
} 
  
int main() 
{ 
   struct node* head=NULL; 
   char s[]="abcdba"; 
  
   for(int i=strlen(s)-1;i>=0;--i) 
     push(head,s[i]); 
  
     //printList(head); 
  
   if(isPalindrome(head)) 
     cout<<"Palindrome"; 
   else cout<<"Not a Palindrome"; 
   return 0; 
} 

 // Method 2 (By Reversing the List): O(n) time complexity & O(1) extra space 

    #include<bits/stdc++.h> 
    using namespace std; 
      
    struct node 
    { 
       char data; 
       struct node* next; 
    }; 
      
    void reverse(struct node*& head) 
    { 
       struct node* current=head; 
       struct node* prev=NULL; 
       struct node* next; 
       while(current!=NULL) 
      { 
         next=current->next; 
         current->next=prev; 
         prev=current; 
         current=next; 
      } 
       head=prev; 
    } 
      
    bool compareLists(struct node* head1,struct node* head2) 
    { 
       struct node* temp1=head1; 
       struct node* temp2=head2; 
      
       while(temp1&&temp2) 
      { 
         if(temp1->data==temp2->data) 
        { 
           temp1=temp1->next; 
           temp2=temp2->next; 
        } 
         else return false; 
      } 
      
       if(temp1==NULL&&temp2==NULL) 
         return true; 
      
       //if one is NULL and other is not 
       return false; 
      
    } 
      
    bool isPalindrome(struct node* head) 
    { 
       struct node *slow_ptr=head,*fast_ptr=head; 
       struct node *prev_of_slow_ptr=head,*second_half,*midnode=NULL; 
       bool res=true; 
      
       if(head!=NULL&&head->next!=NULL) 
      { 
         while(fast_ptr!=NULL&&fast_ptr->next!=NULL) 
        { 
           fast_ptr=fast_ptr->next->next; 
           prev_of_slow_ptr=slow_ptr; 
           slow_ptr=slow_ptr->next; 
        } 
      
         if(fast_ptr!=NULL) 
        { 
           midnode=slow_ptr; 
           slow_ptr=slow_ptr->next; 
        } 
      
         prev_of_slow_ptr->next=NULL; 
         second_half=slow_ptr; 
         reverse(second_half); 
         res=compareLists(head,second_half); 
      
         /*reverse(second_half); // Reverse the second half again 
             if (midnode != NULL)  // If there was a mid node (odd size case) which                                                          
                                   // was not part of either first half or second half. 
             { 
                prev_of_slow_ptr->next = midnode; 
                midnode->next = second_half; 
             } 
             else  prev_of_slow_ptr->next = second_half;*/ 
      } 
         return res; 
    } 
      
    void push(struct node*& head,char data) 
    { 
       struct node* newNode=(struct node*)malloc(sizeof(struct node)); 
      
       newNode->data=data; 
       newNode->next=head; 
       head=newNode; 
    } 
      
    int main() 
    { 
       struct node* head=NULL; 
       char s[]="abccba"; 
      
       for(int i=strlen(s)-1;i>=0;--i) 
         push(head,s[i]); 
      
         //printList(head); 
      
       if(isPalindrome(head)) 
         cout<<"Palindrome"; 
       else cout<<"Not a Palindrome"; 
       return 0; 
    } 