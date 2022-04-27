#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node* next;
};
void addback(Node *&head)
{
    int val=0;
    cin>>val;
    Node *temp=new Node;
    temp->data=val;
    temp->next=NULL;
    if(head==NULL)head=temp;
    else
    {
        Node* tra=head;
        while(tra->next!=NULL)
        {
            tra=tra->next;
        }
        tra->next=temp;
    }
    
}
void display(Node *temp)
{
    
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void multisum(Node *temp,Node *temp2)
{
    int t1=temp->data;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    int t2=temp->data;
    t1=t1*t2;
    int t11,t22;
    t11=temp2->data;
    while(temp2->next!=NULL)
    {
        temp2=temp2->next;
    }
    t22=temp2->data;
    t11=t11*t22;
    cout<<"Sum of the multiplication: "<<t1+t11<<endl;

}
int count(Node *head)
{
    int cnt=0;
    while(head!=NULL)
    {
        head=head->next;
        cnt++;
    }
    return cnt;
}
void reverse_a_node(Node* head)
{
    Node* prv,*cur,*nex;
    prv=NULL;
    cur=nex=head;
    while(nex!=NULL)
    {
        nex=nex->next;
        cur->next=prv;
        prv=cur;
        cur=nex;
    }
    int i=count(prv)/2;
    while(prv!=NULL)
    {
        if(i==0)return;
        cout<<prv->data<<" ";
        prv=prv->next;
        i--;
    }
    
    
}
int main()
{
    Node *head=new Node,*head2=new Node;
    head=NULL;head2=NULL;
    for(int i=0;i<4;i++)addback(head);
    
    for(int i=0;i<5;i++)addback(head2);
    cout<<"Node 1: ";
    display(head);
    cout<<"Node 2: ";
    display(head2);
    multisum(head,head2);
    reverse_a_node(head);
    
    return 0;


}