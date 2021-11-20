#include <iostream>
using namespace std;


int main (){
	int userInput;
	cout<< "Please insert your input :";
	
	cin>> userInput; 
	
	int *ptr =  &userInput;	
	
	cout << "Address of the user input from pointer :"<< *ptr << endl;
	
}
