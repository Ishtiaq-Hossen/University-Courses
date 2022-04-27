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
    int i=5;
    while(i!=0)
    {
		
        cout<<temp->data<<" ";
        temp=temp->next;
		i--;
    }
	cout<<endl;
    
}
void display2(Node *temp)
{
    int i=10;
    while(temp!=NULL)
    {
		if(i==0){cout<<endl;return;}
        cout<<temp->data<<" ";
        temp=temp->next;
		i--;
    }
    
}
void link(Node *&temp1,Node *&temp2)
{
	Node* temp=temp1;
    int i=4;
    while(i!=0)
    {
        temp=temp->next;
		i--;
    }
    temp->next=temp2;//connecting 
	Node *t1=temp2;//for security
		i=4;
		while(i!=0){
			t1=t1->next;
			i--;
		}
		t1->next=temp1;//connecting
		return;
}
void circular(Node *&head)
{
	Node* temp=head;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	temp->next=head;
}
void remove_even(Node *&head)
{
	Node *temp=head;
	Node *prv=head;
	int i=10;
	while(i!=0)
	{
		if(temp->data%2==0)
		{
			Node* del=temp;
			prv->next=temp->next;
			delete del;
			temp=prv;
		}
		prv=temp;
		temp=temp->next;
		i--;
	}
}
int main()
{
	Node *head=new Node;
	Node *head2=new Node;
	head=NULL;
	head2=NULL;
	for(int i=0;i<5;i++)addback(head);
	for(int i=0;i<5;i++)addback(head2);
	circular(head);
	circular(head2);
	display(head);
	display(head2);
	link(head,head2);
	display2(head);
	remove_even(head);
	display2(head);
	return 0;
}
