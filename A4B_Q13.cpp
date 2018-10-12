#include <iostream>
using namespace std;

void display(int numbers[],int c,int size){
	if(c<size){
		cout<<numbers[c]<<endl;
		display(numbers,++c,size);
	}
}

int main() {
	int size;
	cout<<"Enter the number of elements:"<<endl;
	cin>>size;
	int numbers[size];
	for(int i=0;i<size;i++){
		cout<<"Enter your element:";
		cin>>numbers[i];
	}
	display(numbers,0,size);
	return 0;
}