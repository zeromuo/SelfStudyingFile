#include<bits/stdc++.h>
using namespace std;
int main(){
	int d;
	float t1,t2;
	cin>>d;
	t1=27+23+d/3.0;
	t2=d/1.2;
	if(t1==t2){
		cout<<"All"<<endl;
	}
	else if(t1>t2){
		cout<<"Walk"<<endl;
	}
	else{
		cout<<"Bike"<<endl;
	}
}
