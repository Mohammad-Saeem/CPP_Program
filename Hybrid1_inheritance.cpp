#include <iostream>
#include <string>
using namespace std;
class student{
	public:
		int id=5;
		string name ="Saeem";		
		void disp(){
			cout<<"Id is:"<<id<<endl<<"Name:"<<name;
		}
};

class marks:public student{
	public:
	int a,b,c;
	
	void set(){
		a=25;
		b=30;
		c=40;
	}
	void disp1(){
		cout<<"Marks in a is:"<<a<<endl;
		cout<<"Marks in b is:"<<b<<endl;
		cout<<"Marks in c:"<<c;
	}
	int score(){
		return a+b+c;
		
	}
};

class sports{
	public:
		int Smarks=20;
		
};

class result:public marks,sports{
	public:
		int result;
		void set2(){
		
		result = score();
	}
		
};

int main(){
	result ob1;
	ob1.disp();
	cout<<endl;
	ob1.set();
	ob1.disp1();
	cout<<endl;
	int S;
	S=ob1.score();
	cout<<"Your score is:"<<S;
}
