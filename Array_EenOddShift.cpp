//Q.11.write a c program to create new array from a given array of integers shifting all even numbers before odd numbers.
#include<iostream>
using namespace std;
int main(){
	int a[5];
	int b[5],i,j;
	cout<<"Enter array element:";
	for(i=0;i<5;i++){
		cin>>a[i];
	}
	for(i=0;i<5;i++){
		if(a[i]%2==0){
			b[j]=a[i];
		}
	}
	for(i=0;i<5;i++){
		if(a[i]%2!=0){
			b[j]=a[i];
		}
	}
	
	for(j=0;j<5;j++){
		cout<<b[j];
	}
}
