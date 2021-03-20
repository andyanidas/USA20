#include<iostream>

using namespace std;

int main(){
	int age;
	cout<<"enter your age: ";
	cin>>age;
	
	bool asd = age<16;
	
	if(asd){
		//if body
		cout<<"you cannot drink achole";
	}else if(age<18){
		//else body
		cout<<"you cannot go to night club";
	}else{
		cout<<"you are free to do anything you want";
	}
	
	return 0;
}
