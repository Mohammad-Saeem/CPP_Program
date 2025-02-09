//9 .print 1 to n number using class and object.
#include<iostream>
using namespace std;

class number{
	public:
		int num,i;
		
		void collect(){
			cout<<"Enter the number:";
			cin>>num;
			
			
		}
		int print(){
			for(i=1;i<=num;i++){
				cout<<i<<endl;
			}
		}
};

int main(){
	number obj;
	obj.collect();
	obj.print();
}
