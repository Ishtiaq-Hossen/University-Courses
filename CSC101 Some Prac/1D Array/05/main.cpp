 #include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
	float arr[5];
	for(int i=0;i<5;i++){
        arr[i] = ((float)rand() / RAND_MAX) * (10 - 5) + 5;
	}
for(int i=0;i<5;i++){
    cout<<arr[i]<<" ";
}

for(int i=0;i<5;i++)
	{
		for(int j=0;j<(5-i);++j)
			if(arr[j]<arr[j+1])
			{
				float temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
	}

	cout<<endl<<"Array after descending bubble sort:";
	for(int i=0;i<5;++i)
		cout<<" "<<arr[i];

		///////////////////////ascending
		cout<<endl<<endl;

		float arr2[5];
	for(int i=0;i<5;i++){
        arr2[i] = ((float)rand() / RAND_MAX) * (10 - 5) + 5;
	}
for(int i=0;i<5;i++){
    cout<<arr2[i]<<" ";
}

for(int i=0;i<5;i++)
	{
		for(int j=0;j<(5-i);++j)
			if(arr2[j]>arr2[j+1])
			{
				float temp=arr2[j];
				arr2[j]=arr2[j+1];
				arr2[j+1]=temp;
			}
	}

	cout<<endl<<"Array after ascending bubble sort:";
	for(int i=0;i<5;++i)
		cout<<" "<<arr2[i];


	return 0;
}

