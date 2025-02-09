//12.Display only those records whose ID is 2 by array of object
#include<iostream>
using namespace std;
class record{
	public:
	int id,i;
	char name[20];
	int salary;
	
	void collect(){
				
		cout<<"Enter id";
		cin>>id;
		cout<<"Enter name:";
		cin>>name;
		cout<<"Enter salary:";
		cin>>salary;
	
	} 
	
	void display(){
		
		
		
			cout<<id<<endl;
			cout<<name<<endl;
			cout<<salary<<endl;
	}
		
	
};

int main(){
	int i;
	record obj[3];
	for(i=0;i<3;i++){
		obj[i].collect();
		
	}
	
	for(i=0;i<3;i++){
		if(obj[i].id==2){
		
		obj[i].display();}
	}
}
