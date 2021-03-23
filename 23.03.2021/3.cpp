#include<iostream>

using namespace std;

int main(){
	int num,fDigit,lDigit;
	cout<<"Enter a number: ";
	cin>>num; //1
	
	lDigit = num%10;
	
	for(;num>10;num/=10){
		
	}
	fDigit = num;
	cout<<"Last Digit: "<<lDigit<<endl;
	cout<<"First Digit: "<<fDigit;
	
	
	return 0;
}
