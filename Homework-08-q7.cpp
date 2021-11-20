#include<iostream>
using namespace std;

//Function photo type.
void factorial(int factnom,int *a);

int main(){

//Variouble declaration.
	int factnom;
	cout<< "Insert Number :";
	cin>>factnom;
	int fact;

//Crete pointer.
	int *factptr;
	factptr=&fact;
	
	factorial(factnom,factptr);
	cout<<"Factorial of the "<<factnom<<"is :"<<*factptr<<endl;
}

//Function definitian with parameters.
void factorial(int factnom,int *factptr){
	*factptr=1;	
	//Calculate the facorial.
	for(int i=1;i<=factnom;i++){
		*factptr=*factptr*i;
	}
}


