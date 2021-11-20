#include<iostream>
using namespace std;

int main(){
	int input;
	cout<< "Please insert your input :";
	cin>>input;
//Define a pointer.
	int *pointer;
	pointer=&input;
	int **newptr=&pointer;
	
	cout<<"Adress of the pointer : "<<newptr;
	return 0;
}
