#include <iostream>
using namespace std;
bool checkforPrime(int num);
int main(){
	int number ;
	cin>>number;
	if(checkforPrime(number)== true)
        cout<<number<<" is Prime"<<endl;
    else
        cout<<number<<" is not Prime"<<endl;
	return 0;
}
bool checkforPrime(int num){
    bool isPrime = true;
	for(int i=2; i<num; ++i){
        if(num%i == 0){
            isPrime = false;
        }
	}
	if(isPrime==true){
        return true;
	}
	else{
        return false;
	}
}



