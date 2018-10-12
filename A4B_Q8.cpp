#include <iostream>
using namespace std;
 
void sum_digits(int n,int sum){
	if(n>0){
		sum+=(n%10);
		n/=10;
		sum_digits(n,sum);
	}
	else
		cout<<"Sum of digits equals:"<<sum;
}
 
int main() {
	int n,sum=0;
	cout<<"Enter your number:";
	cin>>n;
	sum_digits(n,sum);
	return 0;
}
