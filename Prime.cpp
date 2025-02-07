//6.Write a program in C to check whether a number is a prime number or not using the function.

#include<iostream>
using namespace std;

void prime()
{
    int num;
    int i;

    cout<<"Enter a number: ";
    cin>>num;

    if (num <= 1) {
        cout<<"The number is not prime\n";
        return;
    }

    
    for (i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            cout<<"The number is not prime\n";
            return;
        }
    }

    cout<<"The number is prime\n";
}

int main() {
    prime();
    return 0;
}

