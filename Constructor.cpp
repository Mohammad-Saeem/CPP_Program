#include<iostream>
using namespace std;

class one{
	int a,b;
	public:
		one(){
			a=10;
			b=20;
			}
			
	void disp(){
		cout<<a<<endl<<b;
		
	}
	
	
	
};

int main(){
	one obj1,obj2;
	
	obj1.disp();
	obj2.disp();
	
}
