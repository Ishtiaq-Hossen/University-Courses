//--------Bismillahir Rahmanir Rahim----------/
#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node* next;
};
void addBack(Node *&head,int val)
{
    Node *temp=new Node;
    temp->data=val;
    temp->next=NULL;
    if(head==NULL)head=temp;
    else{
        Node* temp2=head;
        while(temp2->next!=NULL)
        {
            temp2=temp2->next;
        }
        temp2->next=temp;
        
    }
}
//------[recursion used ]-----------/
void printrev(Node *head)
{
    Node* temp=head;
    if(temp==NULL)return;
    else{
        temp=temp->next;
        printrev(temp);
        cout<<head->data<<" ";
    }
}
//-----[ Reverse a linked list - Iterative method  ]----/
void reverse_a_node(Node *&head)
{
    Node* prev,*current,*nex;
    prev=0;
    current=nex=head;
    while(nex!=NULL)
    {
        nex=nex->next;
        current->next=prev;
        prev=current;
        current=nex;
    }
    head=prev;
}
void print(Node *head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}
int main()
{
    Node* head=NULL;
    
    addBack(head,5);
    addBack(head,6);
    addBack(head,10);
    addBack(head,1);
    addBack(head,7);
    print(head);
    reverse_a_node(head);
    print(head);

    return 0;
}