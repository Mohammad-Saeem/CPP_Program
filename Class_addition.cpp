#include<iostream>
using namespace std;


class one 

{
	public:
		int a,b,c;
		
		void collect();
		
		void calculate();
		void display();
};

void one::collect(){
	cout<<"Enter a & b";
	cin >>a>>b;

}
void one::calculate(){
	
	c= a+b;
	
}

void one::display(){
	cout<<c;
}

int main(){
	one addition;
	
	addition.collect();
	addition.calculate();
	addition.display();

}
