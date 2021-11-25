#include<iostream>
#include<cstring>
#include<conio.h>
using namespace std;
bool palindrome(char []);
int main()
{
    char kalo[50];

    if(palindrome(kalo)==true){
        cout<<"Palindrome";
    }
    else {
        cout<<"Not Palindrome";
    }
    getch();
}
bool palindrome(char kalo[]){
    cin>>kalo;
    int len=strlen(kalo);
    bool palindro=false;
    for(int i=0;i<len/2;i++){
        for(int j=(len/2)+1;j<len;j++)
            if(kalo[i]==kalo[j])
            palindro= true;

    }
    if(palindro==true)
        return true;
    else
        return false;
}
