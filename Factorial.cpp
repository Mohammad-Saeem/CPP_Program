//10.Write a C program to calculate the factorial of a given number:
#include<iostream>
using namespace std;
int main(){
	int num,i=1,fact=1;
	cout << "Enter the number:";
	cin >> num;
	
	while(i<=num){
		
		fact = fact * i;
		i++;
	}
	cout<<fact;
}
