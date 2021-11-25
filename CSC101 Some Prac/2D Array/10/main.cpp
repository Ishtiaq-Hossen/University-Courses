#include<iostream>

using namespace std;


int main() {
	int size = 8;

	for(int i=0; i<size-4; i++) {
		for(int j=0; j<size; j++) {
			if((i+j)%2 == 0)
				cout<<(char)254;
			else
				cout<<(char)255;
		}
		cout<<endl;
	}
	return 0;
}
