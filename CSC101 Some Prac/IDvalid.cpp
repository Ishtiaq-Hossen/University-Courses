#include<iostream>
#include<cstring>
using namespace std;
void INVALID(char[] );
int main()
{
    char ID[7];
    INVALID(ID);
    return 0;
}
void INVALID(char id[7]){
    int temp1=0,temp2=0,temp3=0;
    for(int i=0;i<7;i++){
    cin>>id[i];
    }
    for(int i=0;i<7;i++){
    if(id[i]=='0'||id[i]=='1'||id[i]=='2'||id[i]=='3'||id[i]=='4'||id[i]=='5'||id[i]=='6'||id[i]=='7'||id[i]=='8'||id[i]=='9'){
        temp1=1;
    }
    }

    if(id[2]=='1'||id[2]=='2'||id[2]=='3'){
            temp2=1;
    }


    if(id[3]=='0'&&id[4]=='0'&&id[5]=='0'&&id[6]=='0'){
            temp3=1;
    }

    if(temp1==1&&temp2==1&&temp3==0){
        cout<<"valid";
    }
    else{
        cout<<"Non valid";
    }

}

