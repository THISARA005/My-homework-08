#include<iostream>
using namespace std;

//photo type of the function
void numInput(int *pointer);

int main(){
	int input;
	cout<< "Please insert your input :";
	cin>>input;
//Declare the pointer.
	int *pointer;	
	pointer=&input;
	numInput(pointer);
	return 0;
}
//function with pointer parameter to print the value which is user input.
void numInput(int *pointer){
 	cout<<"user inerted value is :"<<*pointer<<endl;
 }
