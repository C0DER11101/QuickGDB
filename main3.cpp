#include<iostream>

using namespace std;

int factorial(int n) {
	if(n==0)
		return 1;

	return n*factorial(n-1);
}

int main(void) {
	int num, result;
	cout<<"Enter an integer: ";
	scanf("%d", &num);

	if(num<0) {
		cout<<"Number is negative!\n";
	}

	else {
		result=factorial(num);
		cout<<num<<"! = "<<result<<"\n";
	}

	return 0;
}
