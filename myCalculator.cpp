#include<iostream>
using namespace std;
int addition(int , int);
int subtraction(int , int);
int multiplication( int , int );
int division( int , int );
int main(){
char choice;
int a,b;
while(1){
	
	cout<<"\n\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Exit\nEnter Choice:";
	cin>>choice;
	if ( choice != '5'){
		cout<<"Enter Two Numbers:\nNumber 1:";
		cin>>a;
		cout<<"Number 2:";
		cin>>b;
	}
	switch ( choice ){
		case '1' : cout<<"Addition:"<<addition(a,b);
		break;
		case '2' : cout<<"Subtraction:"<<subtraction(a,b);
		break;
		case '3' : cout<<"Multiplication:"<<multiplication(a,b);
		break;
		case '4' : cout<<"Division:"<<division(a,b);
		break;
		case '5' : return 0;
		break;
		default : cout<<"\n*Select Correct Option*\n";
	}
}
return 0;
}
int addition( int a , int b ){
return a+b;
}
int subtraction( int a , int b ){
return a-b;
}
int multiplication( int a , int b ){
return a*b;
}
int division( int a , int b ){
return a/b;
}

