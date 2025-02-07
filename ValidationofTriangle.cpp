//14.Write a C program to input all sides of a triangle and check whether triangle is valid or not.

#include<iostream>
using namespace std;
int main(){
	
	int s1,s2,s3;
	
	cout << "Enter side of triangle s1:";
	cin >> s1;
	
	cout << "Enter side of triangle s2:";
	cin >> s2;
	
	cout << "Enter side of triangle s3:";
	cin >> s3;
	
	if(s1+s2+s3==180){
		cout << "Triangle is valid";
		
		
	}
	else{
	  cout <<	"Triangle is not valid";
	}
}
