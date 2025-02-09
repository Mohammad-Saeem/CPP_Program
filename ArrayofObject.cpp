#include<iostream>
using namespace std;

class emp{
	public:
		int id;
		char name[20];
		char phone[20];
		
		void collect(){
			cout<<"Enter Id:";
			cin>>id;
			
			cout<<"Enter Name:";
			cin>>name;
			
			cout<<"Enter Phoneno:";
			cin>>phone;
		}
		
		void display(){
			cout <<id <<" " <<name <<" "<< phone<<endl;
		}
};
int main(){
	emp obj[3];
	int i;
	
	for(i=0;i<3;i++){
		obj[i].collect();
	}
	for(i=0;i<3;i++){
		obj[i].display();
	}
}
