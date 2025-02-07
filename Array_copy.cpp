#include<iostream>
using namespace std;
int main(){
	int a[5]={1,2,3,3,5};
	int b[5],i;
	
	for(i=0;i<5;i++){
		b[i]=a[i];
	}
	
	for(i=0;i<5;i++){
		cout<<b[i];
	}
}
