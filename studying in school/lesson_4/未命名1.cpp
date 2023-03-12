#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[10]={};
	for(int i=0;i<10;i++){
		cin>>a[i];
	}
	int sh,h,o;
	cin>>sh;
	h=sh+30;
	o=0;
	for(int i=0;i<10;i++){
		if(a[i]<=h){
			o++;
		}
	}
	cout<<o<<endl;
}
