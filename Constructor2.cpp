#include<iostream>
using namespace std;

class one{
	int a,b;
	public:
		one(int x, int y){
			a=x;
			b=y;
			}
			
	void disp(){
		cout<<a<<endl<<b;
		
	}
	
	
	
};

int main(){

	
	one obj1(10,20);
	one obj2(30,40);
	obj1.disp();
	cout<<endl;
	obj2.disp();
}
