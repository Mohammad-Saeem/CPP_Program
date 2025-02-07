//11.Write a C program to input week number and print week day.

#include<iostream>
using namespace std;
int main(){
	int week_number;
	
	cout << "Enter the number:";
	cin>>week_number;
	
	switch(week_number){
		case 1:
			cout << "Sunday";
			break;
			
	    case 2:
	    	cout << "Monday";
	    	break;
	    	
	   case 3:
	    	cout << "tuesday";
	    	break; 	
	    	
	   case 4:
	    	cout << "Wednesday";
	    	break;
			
		case 5:
	    	cout << "Thrusday";
	    	break;
		case 6:
	    	cout << "Friday";
	    	break;
			
		case 7:
	    	cout << "Saturday";
	    	break;
			
		default:
		    cout << "Invalid Week number";
			break;				 	
	}
}
