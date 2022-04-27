#include<iostream>
using namespace std;

//Node
struct Node{
   int data;
   Node *next;
};
//cust var
// |data: | pointer:Node |
int main(){
    // syntax error
    // runtime error
    //if(x<y) logical error
    Node *n=nullptr;
    n= new Node;
    Node *m=NULL;
    m=new Node;
    m->data=20;
    m->next=NULL;
    n->data=10;
    n->next=m;
    cout<<&n<<endl;
    cout<<n<<endl;
    cout<<n->data<<endl;
    cout<<n->next<<endl;
    cout<<n->next->data<<endl;//20
    cout<<m<<endl;
    return 0;
}