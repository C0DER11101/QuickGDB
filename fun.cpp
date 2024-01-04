#include<iostream>

using namespace std;

void fun(int x) {
	for(int i=0; i<(x/2)+1; i++)
		cout<<"Odd\n";
	cout<<"ODD!!\n";
}

void funner(int x) {
	for(int i=0; i<(x/2); i++)
		cout<<"Even\n";
	cout<<"EVEN!!\n";
}
