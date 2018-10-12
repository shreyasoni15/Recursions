#include <iostream>
using namespace std;

void odd_even(int ch,int n){
	if(ch<=n){
		cout<<ch<<endl;
		odd_even(++(++ch),n);
	}
	
}

int main() {
	int ch,n;
	cout<<"Enter 0 for EVEN or 1 for ODD:";
	cin>>ch;
	cout<<"Enter terminating number:";
	cin>>n;
	odd_even(ch,n);
	return 0;
}
