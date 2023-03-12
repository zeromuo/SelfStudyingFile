#include<bits/stdc++.h>
using namespace std;
int MaxOfTwo(int a,int b,int c){
	if(a>c){
		if(a>b){
			return a;
		}
		if (a<b){
			return b;
		}
	}
	if(a<c){
		if(b>c){
			return b;
		}
		if(b<c){
			return c;
		}
	}
	
}
int main(){
	int a,b,c;
	cin>>a>>b>>c;
	cout<<MaxOfTwo(a,b,c)<<endl;
	return 0;
}
