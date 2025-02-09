#include<iostream>
using namespace std;
class one{
	int a,b;
	
	public:
		one(int x,int y){
			a=x;
			b=y;
			
		}
		
		one(one &obj1){
			a=obj1.a;
			b=obj1.b;
		}
		
		void disp(){
			cout<<a<<endl<<b;
		}
};

int main(){
	one obj1(10,20);
	one obj2(obj1);
	
	obj1.disp();
	cout<<endl;
	obj2.disp();
}
