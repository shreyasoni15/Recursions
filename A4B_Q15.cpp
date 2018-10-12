#include <iostream>
using namespace std;

void min_max(int numbers[],int c,int size,int min,int max){
	if(c<size){
		if(numbers[c]<min)
			min=numbers[c];
		if(numbers[c]>max)
			max=numbers[c];
		min_max(numbers,++c,size,min,max);
	}
	else{
		cout<<"Maximum equals "<<max<<endl;
		cout<<"Minimum equals "<<min<<endl;
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
	min_max(numbers,0,size,numbers[0],numbers[0]);
	return 0;
}