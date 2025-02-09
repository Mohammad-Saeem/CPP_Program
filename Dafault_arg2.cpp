#include<iostream>
using namespace std;
void interest(int p=5000, int r=3,int t = 1){
	
	int interest = (p*r*t)/100;
	
	cout <<interest<< endl;
	}
	
	int main(){
		
		interest(2000,5,1);
		interest();
		interest(1000);
	}
