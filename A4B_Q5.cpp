#include <iostream>
using namespace std;
 
void odd_even (int ch, int n, int sum){
	if(ch<=n){
		sum+=ch;
		odd_even((++(++ch)),n,sum);
	}
	else
		cout<<"Sum equals:"<<sum;
}

int main() {
	int ch,n,sum;
	cout<<"Enter 0 for EVEN or 1 for ODD:";
	cin>>ch;
	cout<<"Enter terminating number:";
	cin>>n;
	odd_even(ch,n,sum);
	return 0;
}
