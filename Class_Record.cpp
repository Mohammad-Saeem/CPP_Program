//11.Display only  those records whose last digits of mobile number is 88 with array of objects 

#include<iostream>
#include<string.h>
using namespace std;

class Record{
	public:
	int id;
	char name[20];
	char phone[20];
	
	void collect(){
		
		
			cout <<"Enter id: ";
			cin >> id;
			cout << "Enter name: ";
			cin >> name;
			cout << "Enter phone: ";
			cin >> phone;
		
	}
	
	void display(){
		
		
		
			
			
				cout << id << endl;
				cout << name << endl;
				cout << phone << endl;
			
		}
	
};

int main(){
	
	Record records[3];  
	for (int i = 0; i<3; i++) {
		records[i].collect();  
	}
	
	for (int i = 0; i<3; i++) {
		int len=strlen(records[i].phone);
	if(len >= 2 && records[i].phone[len - 1] == '8' && records[i].phone[len - 2] == '8'){
			
		records[i].display();
	}
	}
	
	return 0;
}

