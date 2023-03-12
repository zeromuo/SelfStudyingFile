#include<bits/stdc++.h>
using namespace std;
void PanDuanZhiShu(int n){
	for(int i=0;i<n;i++){
		int a;
		int flag;
		cin>>a;
		flag=1;
		for(int j=2;j<=sqrt(a);j++){
		
			if(a%j==0){
				flag=0;
				break;
			}
		}
		if(flag==1){
			cout<<a<<" ";
		}
}
}
int main(){
	int t;
	cin>>t;
	PanDuanZhiShu(t);
}
