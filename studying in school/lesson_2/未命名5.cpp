#include<bits/stdc++.h>
using namespace std;
void fun(int a,int b){
	for(int i=0;i<a;i++){
		    cin>>b;
		    bool flag=true;
			for(int j=2;j<=sqrt(b);j++){
			   	if(b%j==0){
					flag=false;
		    		break;
			    	}
			}
			if(flag){
					cout<<b<<" ";
		}
		}
}
int main(){
	int c,d;
	cin>>c;
	fun(c,d);
	
}
