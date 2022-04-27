#include<iostream>
#include<algorithm>
using namespace std;

struct student 
{
    int id;
    string name;
    float cgpa;
};

int main(){
    
    student s1[10];
    float arr[10];
    
    for(int i=0;i<10;i++)
    {
        cin>>s1[i].id;
        cin>>s1[i].name;
        cin>>s1[i].cgpa;
        arr[i]=s1[i].cgpa;
    }

    for(int i=0;i<10;i++){
        for(int j=i+1;j<10;j++){
            if(arr[i]<arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }
    //for(auto u:arr)cout<<u<<" ";
    for(int i=0;i<10;i++){
        if(s1[i].cgpa==arr[1]){
            cout<<"2nd highest student cgpa"<<endl;
            cout<<"Name: "<<s1[i].name<<endl;
            cout<<"ID: "<<s1[i].id<<endl;
            cout<<"CGPA: "<<s1[i].cgpa<<endl;
        }
    }
    
    
    return 0;
}
//which student has second highest CGPA
/*
test case
19235
abdullah
2.7
13456
solimullah
2.5
16589
kolimullah
1.56
16894
Halullah
2.6
15689
rohimullah
4.0
45689
dula
1.2
56489
ural
6.5
156845
bindu
4.5
56894
Nuuru
3.00
452015
Narutu
1.4
*/