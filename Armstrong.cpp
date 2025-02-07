#include<iostream>
using namespace std;
int main(){
	int n,rem,org_num,armstrong=0;
	cout << "Enter the number:";
	cin >> n;
	
	org_num = n;
	
	while(n>0){
		rem = n%10;
		armstrong = (rem*rem*rem) + armstrong;
		n = n/10;
		}
	
	if(org_num==armstrong){
		cout << "The number is armstrong";
	}
	
	else{
		cout<<"The number is not armstrong";
	}
}


