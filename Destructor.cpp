#include<iostream>
using namespace std;

class one{
	int a,b;
	int *ptr;
	public:
		one(int x, int y,int z){
			a=x;
			b=y;
			ptr=new int();
			*ptr=z;
		}
		
		~one(){
			


		}
		
		void disp(){
			cout<<a<<b<<*ptr;
		}
};

int main(){
	one obj1(10,20,30);
	
	obj1.disp();
}
