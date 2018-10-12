#include <iostream>
using namespace std;
int base_d;
void pow(int base, int index){
		if(index<=1)
			cout<<"Output"<<base;
		else 
			pow(base*base_d,--index);	
}

int main() {
	int base,index;
	cout<<"Enter Base";
	cin>>base;
	base_d=base;
	cout<<"Enter Index";
	cin>>index;
	pow(base,index);
	return 0;
}