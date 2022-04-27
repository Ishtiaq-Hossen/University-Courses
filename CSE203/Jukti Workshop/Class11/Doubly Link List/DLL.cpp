#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
    Node* prev;
};
//inserted in a sorted way.
void insertNode(Node *&h, Node *&t, int d)
{
    Node *newNode = new Node;
    newNode->data = d;
    newNode->next = NULL;
    newNode->prev = NULL;

    // When list is not initiated
    if(h == NULL && t == NULL)
    {
        h = newNode;
        t = newNode;
    }
    else
    {
        //inserting node at the beginning
        if(newNode->data < h->data)
        {
            newNode->next = h;
            h->prev = newNode;
            h = newNode; // head pointer is changed
        }
        // inserting node at end
        else if(newNode->data >= t->data)
        {
            newNode->prev = t;
            t->next = newNode;
            t = newNode; // tail pointer is changed
        }
        // inserting node in between
        else
        {
            Node *tmp = h;
            while(tmp->data <= newNode->data)
            {
                tmp = tmp->next;
            }
            newNode->next = tmp;
            newNode->prev = tmp->prev;
            tmp->prev->next = newNode;
            tmp->prev = newNode;
        }

    }
}

void printListForward(Node *n)
{
    while(n != NULL)
    {
        cout << n->data << ", ";
        n = n->next;
    }
    cout << endl;
}

void printListBackward(Node *n)
{
    while(n != NULL)
    {
        cout << n->data << ", ";
        n = n->prev;
    }
    cout << endl;
}

Node* searchVal(Node *n, int val)
{
    while(n != NULL)
    {
        if(n->data == val)
            return n;
        n = n->next;
    }
    return NULL;
}

void deleteNode(Node *&h, Node *&t, int d)
{
    if(h == NULL && t == NULL)
    {
        cout << "List not found!" <<endl;
        return;
    }
    else
    {
        // deleting the only node of the list
        if(h->data == d && h == t)
        {
            delete h;
            h = NULL;
            t = NULL;
            return;
        }
        // deleting the first node
        else if(h->data == d)
        {
            h = h->next;
            delete h->prev;
            h->prev = NULL;
        }
        //deleting the last node
        else if(t->data == d)
        {
            t = t->prev;
            delete t->next;
            t->next = NULL;
        }
        else
        {
            Node* tmp = h;
            while(tmp != NULL )
            {
                if(tmp->data == d)
                {
                   tmp->prev->next = tmp->next;
                   tmp->next->prev = tmp->prev;
                   delete tmp;
                   return;
                }
                tmp = tmp->next;
            }
            if(tmp == NULL)
            {
                cout << "Data not found" <<endl;
                return;
            }
        }


    }
}

int main()
{
    int a, x, y;
    Node* head = NULL;
    Node* tail = NULL;

    cout << "Enter the number of items:";
    cin >> a;

    for(int i = 0; i < a; i++)
    {
        cout << "Enter data:";
        cin >> x;
        insertNode(head, tail, x);
    }

    printListForward(head);
    cout << "Enter value to delete:";
    cin >> x;
    /*
    cout << "Enter value to replace:";
    cin >> y;

    Node *t = searchVal(head, x);
    if(t != NULL) t->data = y;
    else cout << "Data not found!";

    */
    deleteNode(head, tail, x);
    printListForward(head);
    printListBackward(tail);
    return 0;

}
