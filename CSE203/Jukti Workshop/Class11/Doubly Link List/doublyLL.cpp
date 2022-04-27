#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node* next = NULL;
    Node* prev = NULL;
};
// insert data in sorted way
void insertNode(Node *&h, Node *&t, int d)
{
    Node* newNode = new Node;
    newNode->data = d;

    if(h == NULL && t == NULL)
    {
        h = newNode;
        t = newNode;
    }
    else
    {
        Node* tmp = h;
        while(tmp->next != NULL && tmp->data < d)
        {
            tmp = tmp->next;
        }

        if(tmp->next == NULL && tmp->data < d)
        {
            tmp->next = newNode;
            newNode->prev = tmp;
            t = newNode;
        }
        else
        {
            tmp->prev->next = newNode;
            newNode->next = tmp;
            newNode->prev = tmp->prev;
            tmp->prev = newNode;
        }

    }
}

void insertNodeAtEnd(Node* &h, Node* &t, int d)
{
    Node* newNode = new Node;
    newNode->data = d;

    if(h == NULL && t == NULL)
    {
        h = newNode;
        t = newNode;
    }
    else
    {
        t->next = newNode;
        newNode->prev = t;
        t = t->next;
    }

}


void printListForward(Node* h)
{
    while(h != NULL)
    {
        cout << h->data << " , ";
        h = h->next;
    }
    cout << endl;
}

void printListBackward(Node* t)
{
    while(t != NULL)
    {
        cout << t->data << " , ";
        t = t->prev;
    }
    cout << endl;
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    insertNode(head, tail, 10);
    insertNode(head, tail, 20);
    insertNode(head, tail, 30);
    insertNode(head, tail, 25);

    printListForward(head);
    printListBackward(tail);
    return 0;
}
