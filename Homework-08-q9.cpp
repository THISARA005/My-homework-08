#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"number of elements :";
	cin>>n;
	cout<<endl;
	int array[n];
	cout<< "Enter elements :"<<endl;
	for(int i=0;i<n;i++){
		cin>>array[i];
	}
		cout<<endl<<endl;
	int *p=array;
	for(int i=0;i<n;i++){
		cout<<"nom "<<i+1<<" element :"<<*(p+i)<<endl;
	}
}
