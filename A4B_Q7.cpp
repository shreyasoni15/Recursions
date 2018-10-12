#include <iostream>
using namespace std;
 
void reverse(int n,int dummy,int rev){
	if(n>0){
		rev=rev*10+(n%10);
		n/=10;
		reverse(n,dummy,rev);
	}
	else
		if(dummy==rev)
			cout<<"Input is palindrome";
		else	
			cout<<"Input is not palindrome";
}
 
int main() {
	int n,dummy,rev=0;
	cout<<"Enter your number:";
	cin>>n;
	dummy=n;
	reverse(n,dummy,rev);
	return 0;
}