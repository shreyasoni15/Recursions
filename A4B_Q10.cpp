#include <iostream>
using namespace std;

void fibonacci(int n,int num1,int num2){
	if(n==1)
		cout<<"Desired Sequence Term:"<<num1;
	else
		fibonacci(--n,num2,num1+num2);
}

int main() {
	int num1=1,num2=1,n;
	cout<<"Enter term position";
	cin>>n;
	fibonacci(n,num1,num2);
	return 0;
}