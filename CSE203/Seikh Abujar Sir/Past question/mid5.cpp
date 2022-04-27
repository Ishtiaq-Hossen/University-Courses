//--------Bismillahir Rahmanir Rahim----------/
#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};
void insert(Node*& root,int val)
{
    Node* temp=new Node;
    temp->data=val;
    temp->next=NULL;
    if(root==NULL)
    {
        root=temp;
        return;
    }
    Node* tra=root;
    while(tra->next!=NULL)
    {
        tra=tra->next;
    }
    tra->next=temp;
}
void sum(Node* n1,Node* n2,Node*& n3)
{
    while(n1!=NULL)
    {
        int temp=n1->data+n2->data;
        n1=n1->next;
        n2=n2->next;
        insert(n3,temp);
    }
}
void display(Node* n3)
{
    while(n3!=NULL)
    {
        cout<<n3->data<<" ";
        n3=n3->next;
    }
    cout<<endl;
}
int main()
{
    Node* x=new Node,*y=new Node,*z=new Node;
    x=NULL;
    y=NULL;
    z=NULL;
    //---x insert---/
    insert(x,3);
    insert(x,9);
    insert(x,3);
    insert(x,4);
     //---y insert---/
    insert(y,9);
    insert(y,2);
    insert(y,6);
    insert(y,11);

    sum(x,y,z);
    display(z);
    return 0;
}