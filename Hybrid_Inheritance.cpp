//Hybrid Inheritance:

#include<iostream>
using namespace std;

class student{
	public:
		int id; 
		char name[20];
		void set(){
		
		cout<<"Enter id:";
		cin>>id;
		cout<<"Enter name:";
		cin>>name;
	}
	
	void disp(){
		cout<<"ID:"<<id<<endl;
		cout<<"Name:"<<name<<endl;
	}
	
};

class exam:public student{
	public:
		
	int maths;
	int phy;
	int eng;
	
	void set1(){
		cout<<"Enter your marks:"<<endl;
		cout<<"Maths:";
		cin>>maths;
		cout<<"Physics:";
		cin>>phy;
		cout<<"English:";
		cin>>eng;
			
	}
	
	void disp1(){
		cout<<"Entered Marks is:"<<endl;
		cout<<"Maths:"<<maths<<endl;
		cout<<"Physics:"<<phy<<endl;
		cout<<"English:"<<eng<<endl;
	}
};

class sports{
	public:
		int Smarks;
		void set2(){
		cout<<"Enter marks in sport:";
	    cin>>Smarks;
     }
void disp2(){
	cout<<"Sports marks:"<<Smarks;
	}
};


class result:public sports,public exam{

	
	public:
	int Result;
	void set3(){
	
	Result = maths+phy+eng+Smarks;
  } 
  void disp3(){
  
	cout<<"Total marks is:"<<Result;
}

	void Final_result(){
		if(Result >50){
			cout<<"Pass";
		}
		else{
			cout<<"Fail";
		}
	}
};

int main(){
	result ob1;
	ob1.set();
	ob1.disp();
	cout<<endl;
	ob1.set1();
	ob1.disp1();
	cout<<endl;
	ob1.set2();
	ob1.disp2();
	cout<<endl;
	ob1.set3();
	ob1.disp3();
	cout<<endl;
	ob1.Final_result();	
}
