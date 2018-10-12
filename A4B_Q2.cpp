#include <iostream>
using namespace std;

void print(int i,int n){
	if(i>=0){
	cout<<(n-i)<<endl;
	print(--i,n);
	}
}

int main() {
	int n;
	cout<<"Enter your Number:";
	cin>>n;
	print(n-1,n);
	return 0;
}