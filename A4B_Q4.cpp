#include <iostream>
using namespace std;

void sum_calc(int sum,int n){
	if(n-1>=0){
	sum+=n;
	sum_calc(sum,--n);
	}
	else
		cout<<"Sum equals:"<<sum;
}

int main() {
	int sum=0,n;
	cout<<"Enter your Number:";
	cin>>n;
	sum_calc(sum,n);
	return 0;
}