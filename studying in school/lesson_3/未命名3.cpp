#include<bits/stdc++.h>
using namespace std;
bool RunNianPanDuan(int in){
	if(((in%4==0)&&(in%100!=0))||(in%400==0)){
		return true;
	}
	else{
		return false;
	}
		
}
int main(){
	int n,m,c;
	cin>>n;
	cin>>m;
	c=0;
	for(int i=n;i<=m;i++){
		if(RunNianPanDuan(i)){
			c++;
		}
	}
	cout<<c<<endl;
	for(int i=n;i<=m;i++){
			if(RunNianPanDuan(i)){
				cout<<i<<" ";
			}

	
}
}
