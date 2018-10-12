#include <iostream>
using namespace std;

void sum_calc(int numbers[],int c,int size,int sum){
	if(c<size){
		sum+=numbers[c];
		sum_calc(numbers,++c,size,sum);
	}
	else
		cout<<"Sum equals "<<sum;
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
	sum_calc(numbers,0,size,0);
	return 0;
}