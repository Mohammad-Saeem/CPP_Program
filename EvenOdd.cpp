//4.find number is even or odd using class and object
#include<iostream>
using namespace std;

class number {
	public:
		int n;
		
		void collect(){
			cout<<"Enter the number:";
			cin>>n;
		}
		
		void EvenOdd(){
			if(n%2==0){
				cout<<"The number is even";
			}
			else{
				cout<<"The number is odd";
			}
		}
};

int main(){
	number evenodd;
	
	evenodd.collect();
	evenodd.EvenOdd();
}
