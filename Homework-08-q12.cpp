#include<iostream>
using namespace std;

int main(){
//input number of elements.	
	int n;
	cout<<"number of elements in array :";
	cin>>n;
	int array[n];
//print the elements of array.	
	for(int i=0;i<n;i++){
		cout<<"Enter number "<<i+1<<" of array ";
		cin>>array[i];
	}
	int *ptr=array;

//sort the array.	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(*(ptr+i)<*(ptr+j)){
				int temp=*(ptr+i);
				*(ptr+i)=*(ptr+j);
				*(ptr+j)=temp;
			}
		}
	}

//print the sorted array.	
	for(int i=0;i<n;i++){
		cout<<"nom "<<i+1<<" in sorted array :"<<*(ptr+i)<<endl;
		}
}
