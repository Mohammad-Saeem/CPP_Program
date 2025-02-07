//Q.7 Write a program in C to find the sum of all elements of the array.
#include<iostream>
using namespace std;
int main(){
	int a[5]={1,5,5,4,5};
	int sum=0,i;
	
	for(i=0;i<5;i++){
		sum=sum+a[i];
	}
	cout<<"Sum of array element is:"<<sum;

			
}
