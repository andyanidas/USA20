#include<iostream>

using namespace std;

int main(){
	
	int num,on=0,tw=0,th=0,fo=0,fi=0,si=0,se=0,eg=0,ni=0,ze=0;
	cin>>num;
	for(;num>0;num/=10){
		//body
		if(num%10==0){
			ze++;
		}
	}
	
	return 0;
}
