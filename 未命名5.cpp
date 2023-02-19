#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b;
	cin>>a;
	for(int i=0;i<a;i++){
	    cin>>b;
	    int flag=1;
		for(int j=2;j<=sqrt(b);j++){
		   	if(b%j==0){
				flag=0;
	    		break;
		    	}
		}
		if(flag==1){
				cout<<b<<" ";
	}
	}
}
