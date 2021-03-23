#include<iostream>

using namespace std;

int main(){
	//12345 1*2*3*4*5
	int num,prod=1;
	cin>>num;
	for(;num>0;num/=10){
		prod = prod * (num%10);
	}
	cout<<prod;
	
	//a*b+c/d%10
	
	return 0;
}
