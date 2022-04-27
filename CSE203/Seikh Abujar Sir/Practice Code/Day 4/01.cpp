/*
#include<iostream>
using namespace std;
int main(){
    //int start=10;
    for(int i=0;i<10;i++){

        for(int j=0;j<10;j++){

            for(int k=0;k<10;k++){
                cout<<i<<" "<<j<<" "<<k<<" ";
            }
                
            
            cout<<endl;
        }

        cout<<endl;
    }
    return 0;
}

//---------2nd code---------/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n==0) return 0;
    main();
    //return 0;
}


#include<iostream>
using namespace std;
int main()
{
    int x[100],temp=1,temp1=0;
    for(int i=0;i<100;i++){
        if(temp<=100){
            x[i]=temp;
            temp+=2;
            temp1++;
        }
        
        
    }
    for(int i=0;i<100;i++){
        cout<<i+1<<"->"<<x[i]<<"\n";
    }
}
*/
#include <iostream>
using namespace std;
int fibonacci(int n) {
   if((n!=1)&&(n!=0)) {
      return(fibonacci(n-1)+fibonacci(n-2));
   }else {
      return n;
   }
}
int main() {
   int n=0;
   cout<<"Enter which fibonacci number you want to show ";
   cin>>n;
   cout<<fibonacci(n);
   return 0;
}
