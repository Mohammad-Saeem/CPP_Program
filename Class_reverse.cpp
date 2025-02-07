//6.Reverse a given number using class and object
#include<iostream>
using namespace std;

class reverse{
	public:
		int num,remainder,Reverse=0;
		
		void collect(){
			cout <<"Enter the number:";
			cin>>num;
		}
		
		int convert(){
			while(num!=0){
			
			remainder = num%10;
			Reverse = Reverse*10+remainder;
			num = num/10;
		
		}
	     return Reverse;
		}
		
};

int main(){
	reverse obj;
	obj.collect();
    int r;
	r =obj.convert();
	cout<<r;
	
}

