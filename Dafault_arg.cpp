//Default Argument:
#include<iostream>
using namespace std;
void add(int x=0,int y=0)
{
	int c= x+y;
	
	cout<<c<<endl;
}

int main(){
	add(3,8);
	add();
	add(8);
}
