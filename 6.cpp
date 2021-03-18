#include<iostream>

using namespace std;

int main(){
	int a,b,c,d;
	string o;
	o = "Enter your grades :";
	cout<<o;
	cin>>a>>b>>c>>d;
	
	string p = "Your av grade is : ";
	cout<<p;
	cout<<(a+b+c+d)/4.0;
	
	float x = 10; //3.333333*3 =
	float y = 3;
	x = x/y; //10/3=3
	x = x*y;
	cout<<x;
	
	
	return 0;
}


