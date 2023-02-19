#include<bits/stdc++.h>
using namespace std;
int main(){ 
    int a,i;
    cin>>a;
    int flag=1;
    for(i=2;i<=sqrt(a);i++){
    	if(a%i==0){
			flag=0;
    		break;
    	}
	}
	if(flag==1){
		cout<<"是质数";
	}else{
		cout<<"是合数";
	}
	return 0;
}
