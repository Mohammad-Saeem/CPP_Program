//Q.5 Write a program in C to sort the elements of the array in descending order.
#include<iostream>
using namespace std;
int main(){
	int arr[5],i,j,temp;
	cout<<"Enter array element:";
	for(i=0;i<5;i++){
		cin>>arr[i];
	}
	
	
    for(i=0;i<5;i++){
		for(j=i+1;j<5;j++){
			if(arr[i]<arr[j]){
				temp = arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	
	for(i=0;i<5;i++){
		cout<<arr[i];
	}
}
