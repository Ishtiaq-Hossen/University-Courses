/*//--------Bismillahir Rahmanir Rahim----------/
#include<iostream>
using namespace std;
int decimalToBinary(int);
int main()
{
    /**------for user input -------
    int n;
    cin>>n;
    cout<<decimalToBinary(n)<<endl;
    

    //------for normal input-----
    cout<<decimalToBinary(43)<<endl;

    return 0;
}
int decimalToBinary(int formalParameter){
    int binary=0,temp=0,placement=1;
    while(formalParameter)
    {
        temp=formalParameter%2;//because binary base=2
        formalParameter=formalParameter/2;
        binary=binary+(temp*placement);
        placement=placement*10;//it will help us to placement our binary data

    }
    return binary;
}*/

/*#include <bits/stdc++.h>
using namespace std;
 
// Returns true if n is prime, else
// return false.
// i is current divisor to check.
bool isPrime(int n, int i = 2)
{
    // Base cases
    if (n <= 2)
    {
        if(n==2)return true;
        else return false;
    }
    if (n % i == 0)
        return false;
    if (i * i > n)
        return true;
 
    // Check for next divisor
    return isPrime(n, i + 1);
}

// Driver Program
int main()
{
    int n = 7;
    if (isPrime(n))
        cout << "Yes";
    else
        cout << "No";
 
    return 0;
}
#include<iostream>
#include<stdio.h>

// declaring the recursive function
int isPrime(int);
int i;
int main()
{
    printf("\n\n\t\tStudytonight - Best place to learn\n\n\n");
    int num, prime;
    printf("Enter a positive number to check if Prime: ");
    scanf("%d", &num);
    i=num/2;
    prime = isPrime(num);
    if(prime == 1)
    {
        printf("\n\n%d is a prime number\n\n", num);
    }
    else
    {
        printf("\n\n%d is a Composite number\n\n", num);
    }
    printf("\n\n\t\t\tCoding is Fun !\n\n\n");
    return 0;
}

// function definition
int isPrime(int n)
{
    if(i == 1)
        return 1;   // return statement terminates the recursive funtion
    else
    {
        if(n%i == 0)
            return 0;
        else{
            i=i-1;
            isPrime(n);
        }
                // recursive call not using return statement
    }
}
//--------------------------


#include<iostream>
using namespace std;
int arr1[1000];
int n;
int arr[1000];
void k(int k1,int l){
    for(int i=0;i<k1;i++){
        cout<<arr[i]<<" ";
    }
    for(int i=k1;i<=l;i++){
        cout<<arr1[i]<<" ";
    }
    if(l+1==n)return;
    else{
        for(int i=l+1;i<n;i++){
        cout<<arr[i]<<" ";
        }
    }
    
}
int main()
{
    
    cin>>n;

    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int temp=0;
    for(int i=n-1;i>=0;i--){
        arr1[i]=arr[temp];
        temp++;
    }
    for(int i=0;i<n;i++){
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
    k(3,9);
}
*/
//---------quiz 1------------/
#include<iostream>
using namespace std;
int arr[1000];
int n;
void k(int k1,int l){
    int arr1[l-k1+1];
    int temp=0;
    for(int i=0;i<n;i++){
        if(i>=k1 && i<=l){
            arr1[temp]=arr[i];
            temp++;
        }
    }
    for(int i=0;i<l-k1+1;i++){
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<k1;i++)cout<<arr[i]<<" ";
    for(int i=l-k1;i>=0;i--)cout<<arr1[i]<<" ";
    for(int i=l+1;i<n;i++)cout<<arr[i]<<" ";
    
    
}
int main(){
    
    cin>>n;
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    k(3,10);

}

 
