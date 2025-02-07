#include<iostream>
using namespace std;

int sum(int n){
	int sum=0,i;
	
	cout<<"Enter the number:";
	cin>>n;
	
	for(i=0;i<=n;i++){
		cout <<i <<endl  ;
		
		sum = sum+i;
		
	}
	return sum;
}

int main(){
	int sum1,a;
	
	sum1= sum(a);
	
	cout <<sum1;
}
