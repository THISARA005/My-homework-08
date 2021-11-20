#include<iostream>
#include<cstring>
using namespace std;

int main(){
//Declare variables.
	int count;
	int n;
//choose maximum charactors of your string. 
	cout<<"number of charactors in string is :";
	cin>>n;
	char str[n];
	cout<<"\nEnter your string (below "<<n<<" charactors ) :"<<endl;
	cin>>str;
//Assighn pointer.
	char *ptr;
	ptr=str;
//calculate length of your string.
	while(*ptr!='\0'){
		count++;
		*ptr++;
	}
	cout<<"Length of the string is :"<<count<<endl;
	return 0;
}
