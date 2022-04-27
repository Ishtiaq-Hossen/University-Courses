//--------Bismillahir Rahmanir Rahim----------/
#include<iostream>
using namespace std;
/**--------------------
[
    stack follows LIFO(Last In First Out) method
    push function is use for insert at last
    pop function is use for delete from last 
    
]
-----------------------**/
struct mystack
{
    int index=0;
    int *elements =new int[5];

};
void push(mystack *&head,int val)
{
    head->elements[head->index]=val;
    head->index+=1;
    /*
        for that 
            head->index+=1;
        increasing our index value is always have added one
        and that is why we have to reduce 1 from pop function
    */
}
int pop(mystack *&head)
{
    head->index-=1;
    return head->elements[head->index];
}
int main()
{
    mystack *head=new mystack;
    push(head,5);
    push(head,10);
    push(head,15);
    push(head,20);
    push(head,30);
    push(head,35);

    while(head->index!=0){
        cout<<pop(head)<<endl;
    }
    
    /*
        if you don't understand while loop
        then use this

        for(int i=0;i<=5;i++){
            cout<<pop(head)<<endl;
        }

    */
    return 0;
}