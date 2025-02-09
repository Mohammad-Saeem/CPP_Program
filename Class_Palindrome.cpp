//7 .find number is palindrome or not u123sing class and object .

#include<iostream>
using namespace std;

class palindrome{
	
	public:
		int num,originalNum,reverse=0,remainder;
		
		void collect(){
			cout<<"Enter the number:";
			cin>>num;
			originalNum = num;
		}
		
		void check(){
			while(num!=0){
			    remainder =num%10;
				reverse = reverse*10+remainder;
				num = num/10; 
			}
						
			if(originalNum==reverse){
				cout<<"Number is palindrome";
			}
			else{
				cout<<"Not Palindrome";
			}
		}
};


int main(){
	palindrome obj;
	
	obj.collect();
	obj.check();
}
