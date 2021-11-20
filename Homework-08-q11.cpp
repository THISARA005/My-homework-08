#include<iostream>
using namespace std;

int main(){
//number of vowels.	
	int count1=0;
//number of consonents.	
	int count2=0;
//choose maximum charactors of your string. 
	int n;
	cout<<"number of charactors in string is :";
	cin>>n;
	char str[n];
	cout<<"\nEnter your string (below "<<n<<" charactors ) :"<<endl;
	cin>>str;
	
//storing first charactor in the str[] address to ptr.
 	char *ptr=str;
	while(*ptr!='\0'){
		if(*ptr==97 || *ptr==101 || *ptr==105 || *ptr==111 || *ptr==117 || 
       *ptr==65 || *ptr==69  || *ptr==73  || *ptr==79  || *ptr==85){
       	 count1++;
       	 *ptr++;
	   }else{
	   	count2++;
	   	*ptr++;
	   }
	}
	cout<<"nom of vowels :"<<count1<<endl;
	cout<<"nom of consonents :"<<count2<<endl;
	
	return 0;
	
	
}
