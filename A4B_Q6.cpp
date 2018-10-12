#include <iostream>
using namespace std;

void reverse(int n, int rev){
	if(n>0){
		rev=rev*10+(n%10);
		n/=10;
		reverse(n,rev);
	}
	else
		cout<<"Reversed Number:"<<rev;
}

int main() {
	int n,rev=0;
	cout<<"Enter your number:";
	cin>>n;
	reverse(n,rev);
	return 0;
}