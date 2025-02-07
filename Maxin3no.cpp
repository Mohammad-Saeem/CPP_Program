//2.Write a C program to find maximum between three numbers.

#include<iostream>
using namespace std;
int main(){
	int a,b,c;
	
	cout << "Enter the number a:";
	cin >> a;
	cout << "Enter the number b:";
	cin >> b;
	cout << "Enter the number c:";
	cin >> c;
	
	if(a>b && a>c){
		cout << "a is maximum";
	}
	else if(b>a && b>c){
		cout << "b is maximum";
	}
	else{
		cout << "c is maximum";
	}
	
	}
