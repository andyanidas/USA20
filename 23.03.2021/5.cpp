#include<iostream>

using namespace std;

int main(){
	//12345 ->>6
	int num,rev=0;
	cin>>num;
	
	for(;num>0;num/=10){
		//body
		rev = rev*10 + num%10;//rev = 6*10 + 5 = 65
	}
	cout<<rev;
	
	
	return 0;
}
