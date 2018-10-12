#include <iostream>
#include <cmath>
using namespace std;
 
void gcd(int num1,int num2,int c){
	if(c%num1==0 && c%num2==0)
		cout<<"HCF of the 2 numbers:"<<c;
	else	
		gcd(num1,num2,++c);
}
 
int main() {
	int num1,num2,c;
	cout<<"Enter First Number";
	cin>>num1;
	cout<<"Enter Second Number";
	cin>>num2;
	c=max(num1,num2);
	gcd(num1,num2,c);
	return 0;
}
