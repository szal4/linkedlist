//creating a 2 block linked list with data 2,4.where a will store the address of head node
#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
   struct node{
       int data;
       node *link;
   };
   node *a;
     node* temp=new node();
     temp->data=2;
     temp->link=NULL;
     a=temp;
     temp=new node();
     temp->data=4;
     temp->link=NULL;
     node*temp1=a;
     while(temp1->link!=NULL){//transversing 
         cout<<temp1->data<<" ";
         temp1=temp1->link;
     }
      cout<<temp1->data<<" "<<endl;
    temp1->link=temp;
    temp1=a;
    while(temp1->link!=NULL){//transversing
        cout<<temp1->data<<" ";
        temp1=temp1->link;
    }
     cout<<temp1->data<<" ";
    return 0;
}
