#include<iostream>
using namespace std;
void add(int x,int y){
   cout<<"Summation of "<<x<<"+"<<y<<" = "<<x+y<<endl;
   ///universe
}

int sum(int x,int y){
    int sum=x+y;
    return sum;
}


float division(int x,int y){
    float div=x/(y*1.0);
    //return div;
}


string sayMyName(string name){
  string str;
  //
  if(name.length()>5){ 
  str="Adult "+name;
  }
  else{
      str="UnderAge"+name;
  }
 
  //a func can only return one value
    return str;
}

/* 
    2 types
        returnable
            sends something back
        non returnable
            can not send anything


 */
int sumOfArr(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    cout<<"sum = "<<sum<<endl;
}
int main(){
   /*  int r=sum(10,3);
    int ar[5]={10,15,20,25,30};
    int sArr=sumOfArr(ar,5);
    int z=sum(sArr,45);
    cout<<"Z = "<<z<<endl;
 */
     

   /*  add(10,6);
    sayMyName("sufian",25); */
    //int 
    int age;

    /* cin>>name>>age;
    sayMyName(name,age); */ 

    /* for(int  i=0;i<5;i++){
        add(i+1,i+10);
    } */
    string name;
        name=sayMyName("Sufian");
        cout<<name<<endl;
        name=sayMyName("joy");
        cout<<name<<endl;
    return 0;
}
/* 
    take inputs
    check each index for prime
        if(prime)
            show value
 */