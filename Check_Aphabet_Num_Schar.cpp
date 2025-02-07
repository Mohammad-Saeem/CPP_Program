//9.Write a C program to input any character and check whether it is alphabet, digit or special character.

#include<iostream>
using namespace std;
int main()
{
	char ch;
	
	cout << "Enter the character:";
	cin >> ch;
	
	if ((ch>='a'&&ch<='z')||(ch>='A'&&ch<='z')){
		
		cout << "Given character is Alphabet";
	}
	else if(ch>='0' && ch<= '9'){
		cout << "Given character is Number:";
	}
	else{
		cout << "Given character is a Special character:";
	}
	
}
