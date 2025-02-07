// Write a program in C to store elements in an array and print them.
#include<iostream>
using namespace std;
int main(){
	int Arr[10],i;
	cout<< "Enter array element:";
	for(i=0;i<10;i++){
		cin>>Arr[i];
	}
	
	cout << "Entered array is :";
	for(i=0;i<10;i++){
	
			cout << Arr[i];
	}
	
}
