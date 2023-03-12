#include<bits/stdc++.h>
using namespace std;
void d(int b){
	if(b==0){
		return;
	}
	d(b/2);
	cout<<b%2;
}
int main(){
	int b;
	cin>>b;
	d(b);
	if(b==0){
		cout<<0;
	}
	return 0;
}
