//--------Bismillahir Rahmanir Rahim----------/
#include<iostream>
using namespace std;
/**--------------------
[
    queue follows FIFO(First In First Out) method
    enqueue function is use for push function
    dequeue function is use for pop function
    
]
-----------------------**/
struct myQueue
{
    int headIndex=0;
    int tail=0;
    int* elements=new int[5];
};
void enqueueElements(myQueue *&head,int value)
{
    head->elements[head->tail]=value;
    head->tail+=1;
}
int dequeueElements(myQueue *&head)
{
    /*
        as we sequred out headIndex value till now
        we can easily delete value from the first
    */
    int print=head->elements[head->headIndex];
    head->headIndex+=1;
    return print;
}
int main()
{
    myQueue *head=new myQueue;
    enqueueElements(head,5);
    enqueueElements(head,10);
    enqueueElements(head,15);
    enqueueElements(head,20);
    enqueueElements(head,25);
    int i=1;//--this is for showing FIFO :)
    while(head->headIndex!=5)
    {
        cout<<i<<" no pop: "<<dequeueElements(head)<<endl;i++;
    }

    
    return 0;
}