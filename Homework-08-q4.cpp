#include<iostream>
using namespace std;

int main(){
	int input;
	cout<< "Please insert your input :";
	cin>>input;
	int *pointer=&input;
	cout<<"Value of the user input from pointer : "<<*pointer<<endl;
	 
}
