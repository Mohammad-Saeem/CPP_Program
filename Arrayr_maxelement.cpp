//Q.9 Write a program in C to maximum element.
#include<iostream>
using namespace std;
int main(){
	int a[5]={1,2,8,3,5};
	int max=0,i;
	
	for(i=0;i<5;i++){
		
		if(max<a[i]){
			max=a[i];
		}
	}
	cout<<"Max:"<<max;
}
