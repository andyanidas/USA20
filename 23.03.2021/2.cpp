#include<iostream>

using namespace std;

int main(){
	int num,count=0;
	cin>>num; //123456
	
	for(;num>0;num/=10){
		count++;
		//body
	}
	//num/=10 <--> num = num/10
	cout<<count;
	
	
	
	
	return 0;
}
