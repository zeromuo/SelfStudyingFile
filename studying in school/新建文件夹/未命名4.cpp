#include<bits/stdc++.h>
using namespace std;
int main(){
	int value;

	while (cin >> value){
		int i;
    	int flag=1;
    	for(i=2;i<=sqrt(value);i++){
    		if(value%i==0){
				flag=0;
    			break;
    		}
		}
		if(flag==1){
			cout<<value;
		}
	}
}
