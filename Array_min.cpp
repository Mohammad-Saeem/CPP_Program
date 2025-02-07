//Q.10Write a program in C to minimum element.
#include<iostream>
using namespace std;
int main(){
	int a[5] ={2,1,3,4,5};
	int min=a[0],i;
	
	for(i=0;i<5;i++){
		
		if(min>a[i]){
			min =a[i];
		}
	}
	cout<<min;
}
