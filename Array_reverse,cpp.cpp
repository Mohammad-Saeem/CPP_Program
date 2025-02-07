//Q.6 Write a program in C to read n number of values in an array and display them in reverse order.
#include<iostream>
using namespace std;
int main(){
	int n,i;
	cout<<"Enter the number of values you in array:";
	cin>>n;
	int a[n];
	cout<<"Enter array element:";
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	
	
	for(i=0;i<n;i++){
		cout<<a[i];
	}
	cout<<endl;
	for(i=n-1;i>=0;i--){
		cout<<a[i];
	}
}
