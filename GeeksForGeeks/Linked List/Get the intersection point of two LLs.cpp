#include<bits/stdc++.h>
using namespace std;
  
  struct node
  {
        int data;
        struct node* next;
  };
  
  void findIntersection(struct node* head1,struct node* head2)
  {
        struct node* current1=head1;
        struct node* current2=head2;
        map<struct node*,int> m;     //OR map<int*,int> m; 

        while(current1!=NULL)
     {         
        m.insert(pair<struct node*,int> (current1,1));   //OR m.insert(pair<int*,int> (current1->data),1));
        current1=current1->next;
     }
        while(current2!=NULL)
     {
           if(m.find(current2)!=m.end())    //OR  if(m.find(current2->data))!=m.end())
           {    cout<<current2->data; break; }
           current2=current2->next;
     }
  }
  
     void printList(struct node   * node)
  {
        while(node!=NULL)
     {
           cout<<node->data<<" ";
           node=node->next;
     }
  }
  
     int main()
  {
        struct node* newNode;
     
        struct node* head1=(struct node*)malloc(sizeof(struct node));
        head1->data=3;
     
        struct node* head2=(struct node*)malloc(sizeof(struct node));
        head2->data=10;
     
        newNode=(struct node*)malloc(sizeof(struct node));
        newNode->data=6;
        head1->next=newNode;
     
        newNode=(struct node*)malloc(sizeof(struct node));
        newNode->data=9;
        head1->nex   t->next=newNode;
     
        newNode=(struct node*)malloc(sizeof(struct node));
        newNode->data=15;
        head1->next->next->next=newNode;
        head2->next=newNode;
     
        newNode=(struct node*)malloc(sizeof(struct node));
        newNode->data=30;
        head1->next->next->next->next=newNode;
        head2->next->next=newNode;
     
        cout<<"LL 1:\n";
        printList(head1);
        cout<<"\nLL 2:\n";
        printList(head2);
     
        cout<<"\nIntersection point:\n";
        findIntersection(head1,head2);
     
        return 0;
  }