#include <iostream>
using namespace std;
 
void factorial(int n,int fact){
	if(n>0){
		fact*=n;
		--n;
		factorial(n,fact);
	}
	else
		cout<<"Factorial equals:"<<fact;
}
 
int main() {
	int n,fact=1;
	cout<<"Enter your number:";
	cin>>n;
	factorial(n,fact);
	return 0;
}