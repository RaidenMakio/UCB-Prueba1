#include <iostream>
using namespace std;

int main ()
{
	int yearage, age=0, currentyear=2024;
	
	cout<<"Write your birth year here: ";
	cin>>yearage;
	age = currentyear - yearage;
	if (age>=18 && age<123){
		cout<<"You are "<<age<<" years old, you pass lad.";
	}
	else if (age<0){
		cout<<"You didn't even born wtf.";
	}
	else if (age>=123 && age<132){
		cout<<"You are "<<age<<" years old."<<endl;
		cout<<"SIR/LADY, YOU JUST BROKE THE RECORD OF THE OLDEST PERSON ALIVE!!!";
	}
	else if (age>=132 && age<1000){
		cout<<"You are "<<age<<" years old."<<endl;
		cout<<"Dawg are you even alive?";
	}
	else if (age>=1000){
		cout<<"You are "<<age<<" years old."<<endl;
		cout<<"Let me guess, you are a magic little girl"<<endl;
		cout<<"created by some molester weeb right?";	
	}
	else if (age>=0 && age<12){
		cout<<"You are "<<age<<" years old."<<endl;
		cout<<"Too young for this, have you considered"<<endl;
		cout<<"call your parents?";
	}
	else{
		cout<<"You are "<<age<<" years old, you are underaged kiddo";
	}
		
	
	return 0;
}
