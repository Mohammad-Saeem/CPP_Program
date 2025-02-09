//8.find number is armstrong or not using class and object.
#include<iostream>
using namespace std;

class Armstrong{
	public:
		int num,rem,armstrong=0,origNum;
		
		void collect(){
			cout << "Enter the number:";
			cin>>num;
			origNum = num;
		}
		
		void check(){
			while(num!=0){
			rem= num%10;
			armstrong = (rem*rem*rem)+armstrong;
			num = num/10;
		}
		if(origNum==armstrong){
			cout<<"Number is Armstrong";
		}
		else{
			cout<<"Not Armstrong";
		}
		}
};

int main(){
	Armstrong obj;
	obj.collect();
	obj.check();
}
