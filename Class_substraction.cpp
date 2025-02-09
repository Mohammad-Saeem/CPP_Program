//2.subtraction of two numbers using class and object

#include<iostream>
using namespace std;

class subs{
	public:
		int a,b,c;
		
		void collect();
		void calculate();
		void display();
		
};

void subs::collect(){
	cout<<"Enter value of a & b";
	cin>>a>>b;
	
}

void subs::calculate(){
	c= a-b;
}

void subs::display(){
	cout<<"The substraction is"<<c;
}

int main(){
	subs substraction;
	substraction.collect();
	substraction.calculate();
	substraction.display();
}
