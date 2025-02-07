//5.find number is positive or negative using class and object

#include<iostream>
using namespace std;

class number{
	public:
		int n;
		
		void collect(){
			cout<<"Enter number";
			cin>>n;
		}
		
		void check(){
			if(n>0){
				cout<<"Number is positive:"<<n;
			}
			else if(n<0){
				cout<<"Number is negative:"<<n;
			}
			else{
				cout<<"Not positive not negative:";
			}
		}
};

int main(){
	number obj;
	
	obj.collect();
	obj.check();
}
