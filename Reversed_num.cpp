//11.Write a C program to reverse a number.
#include<iostream>
using namespace std;
int main()
{
	int num,reversed=0,remainder;
	
	cout << "Enter the number:";
	cin >> num;
	
	while(num!=0){
		remainder = num %10;
		reversed = reversed * 10 + remainder;
		num = num/10;
	}
	cout << reversed ;
}
