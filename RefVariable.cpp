#include<iostream>
using namespace std;
int main(){
	
	int a = 10;
	int &ref= a;
	
	cout <<a<< " " <<ref<<endl;
a = 150;
ref= 105;
	cout<<a<< " " <<ref<<endl;
}
