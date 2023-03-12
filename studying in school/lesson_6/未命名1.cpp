#include<iostream>
using namespace std;
int main(){
	int a,b;
	cin>>a>>b;
	int *p=NULL;
	int *q=NULL;
	p=&b;
	q=&a;
	cout<<*p<<" "<<*q;
}
