#include<iostream>

using namespace std;

int main(){
	string name;
	cout<<"enter your name: ";
	cin>>name;
	
	
	if(name == "bold"){
		//if body
		cout<<"Hello bold";
	}else{
		//else body
		cout<<"Sorry i dont recognize you";
	}
	
	return 0;
}
