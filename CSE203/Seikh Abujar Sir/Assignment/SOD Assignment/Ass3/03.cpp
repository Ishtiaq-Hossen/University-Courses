//--------Bismillahir Rahmanir Rahim----------/
/**--------------------
[
    Write addBack function of Linked List
]
-----------------------**/
#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
void addBack(Node *&root)
{
    int temp=0;
    cin>>temp;
    Node *tempNode=new Node;
    tempNode->data=temp;
    tempNode->next=NULL;
    if(root==NULL)root=tempNode;
    else{
        Node *q=root;
        
        while(q->next!=NULL){
            q=q->next;
        }
        q->next=tempNode;

    }
}
void printNode(Node *main)
{
    
    while(main!=NULL)
    {
        cout<<main->data<<"->";
        main=main->next;
    }
    
    cout<<"\b\b    \n";
}
int main()
{
    Node *root=new Node;
    root=NULL;
    cout<<"Enter 5 Node data: ";
    addBack(root);
    addBack(root);
    addBack(root);
    addBack(root);
    addBack(root);
    cout<<"Node: ";
    printNode(root);  
    return 0;
}

/**--------------------
[
    test cases
    input: 6,12,1,12,7
    output: 6,12,1,12,7
]
-----------------------**/