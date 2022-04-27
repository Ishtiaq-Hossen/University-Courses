/*#include<iostream>
using namespace std;
void add(int);
int main()
{
    add(4);
    return 0;
}
void add(int a){
    if(a==2)
        return ;
    else{
        cout<<"1st "<<a<<" \n";
        add(a-1);
        cout<<"2nd "<<a<<" \n";
        return ;
    }
}

//-------------class code-----------/

#include<iostream>
using namespace std;
int recursion(int n){
    if(n==0||n==1) return n;
    else return (recursion(n-1)+recursion(n-2));
    
}
int main()
{
    int n=0;
    cin>>n;
    for(int i=0;i<=n;i++){
        cout<<recursion(i)<<" ";
    }
    
    return 0;
}
//https://jamboard.google.com/d/15gjfU8xZT-DdhwnmFNgJ3u7rHscrr-HJNzdNI4MhPfc/viewer?f=1
//https://www.edureka.co/blog/fibonacci-series-in-c/


//--------Bismillahir Rahmanir Rahim----------/
#include<bits/stdc++.h>
#define _ ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{_
    
    int a,b,c;
    cin>>a>>b>>c;
    int count=0;
    
        if(b<a)
        {
            cout<<0<<endl;
            return 0;
        }
        else{
            while(c--){
        
            if(b==0)break;
            b=b-a;
            count++;
            
            
            }
            
        }
        cout<<count<<endl;
        
    
    //else return 0;
    
    
    
    return 0;
}*/
#include<iostream>
using namespace std;
int arr[1000];
int n;
void k(int l,int m){
    int temp=m;
    for(int i=l;i<=((m-l)/2)+1;i++){
        swap(arr[i],arr[temp]);
        temp--;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<",";
    }
}
int main()
{
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    k(1,3);
}
    


