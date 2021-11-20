#include<iostream>
using namespace std;

int main(){
	int input;
	cout<< "Enter number :";
	cin>>input;
	int output;

//Define pointer.	
	int *ptr;
	ptr=&input;
	int c=0;
	int b=0;
	while(*ptr>0){
		c=*ptr%10;
		b=b*10+c;
		*ptr=*ptr/10;
	}
	cout<<"Reverse number is :"<<b<<endl;
	return 0;
}
