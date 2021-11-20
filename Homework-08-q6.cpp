#include<iostream>
using namespace std;

int main(){
//Input 3 values.	
	int input1;
	cout<< "insert your input 1 :";
	cin>>input1;
	
	int input2;
	cout<< "insert your input 2 :";
	cin>>input2;
	
	int input3;
	cout<< "insert your input 3 :";
	cin>>input3;
	
//Define pointers.	
	int *p1=&input1;
	int *p2=&input2;
	int *p3=&input3;
	
	if(*p1>=*p2 && *p1>=*p3){
		if(*p2>=*p3){
			cout<<"greatest ="<<*p1<<"\n"<<"smallest ="<<*p3;
		}else{
			cout<<"greatest ="<<*p1<<"\n"<<"smallest ="<<*p2;
		}
	
	}
	if(*p2>*p3 && *p2>*p1){
		if(*p3>*p1){
			cout<<"greatest ="<<*p2<<"\n"<<"smallest ="<<*p1;
		}else{
			cout<<"greatest ="<<*p2<<"\n"<<"smallest ="<<*p3;
		}
	
	}
	if(*p3>*p1 && *p3>*p2){
		if(*p2>*p1){
			cout<<"greatest ="<<*p3<<"\n"<<"smallest ="<<*p1;
		}else{
			cout<<"greatest ="<<*p3<<"\n"<<"smallest ="<<*p2;
		}
	
	}	
}
