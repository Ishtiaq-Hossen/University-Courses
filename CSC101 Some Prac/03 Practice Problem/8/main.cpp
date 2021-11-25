#include <iostream>

using namespace std;

int main()
{
   int x;
   cout<<"Enter the number: ";
   cin>>x;
   if((x>10)&&(x<40)){
    if(x%5==0){
        cout<<"Yes";
    }
    else{
    cout<<"No";
   }

   }




   else if((x>60)&&(x<90)){
    if(x%7==0){
        cout<<"Yes";
    }
    }
    else{
    cout<<"No";
   }



    return 0;
}
