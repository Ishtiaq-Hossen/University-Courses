#include<iostream>
using namespace std;
struct node 
{
  int data;
  node* next;  
};

void insertAtFirst(node *&head,int value)
{
    node *newmatha=new node;
    newmatha->data=value;
    newmatha->next=head;
    head=newmatha;
}
/**--------------------
[
    easiest way to insert data at first
    without node manipulation
]
-----------------------**/
void insertFirst(node *&matha,int value)
{
    node *newmatha=new node{value,matha};//that means we stored value in newmatha and connect it to matha
    matha=newmatha;//head node changing 
}
/**--------------------
[
    with that function we can 
    print the node data
    -->more likely print function
]
-----------------------**/
void traverse(node *&head)
{
    for(node* i=head;i!=NULL;i=i->next)
    {
        cout<<i->data<<" ";
    }
    cout<<endl;
}

int main()

{
    node *head=new node;
    head=NULL;
    insertFirst(head,5);
    insertFirst(head,10);
    insertFirst(head,57);
    insertFirst(head,15);
    insertFirst(head,4);
    cout<<endl;
    traverse(head);
    return 0;
}