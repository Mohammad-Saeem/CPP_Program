//10.find maximum between two numbers using class and object

#include<iostream>
using namespace std;

class Max{
	public:
		int a,b;
		
		void collect(){
			cout<<"Enter value of a:";
			cin>>a;
			cout<<"Enter value of b:";
			cin>>b;
		}
		
		void check(){
			if(a>b){
				cout<<"a is maximum";
			}
			else{
				cout<<"b is maximum";
			}
		}
};

int main(){
	Max obj;
	obj.collect();
	obj.check();
}
