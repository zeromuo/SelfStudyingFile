//using namespace std;
//void fun(int a,int b){
//	for(int i=0;i<a;i++){
//		    cin>>b;
//		    bool flag=true;
//			for(int j=2;j<=sqrt(b);j++){
//			   	if(b%j==0){
//					flag=false;
//		    		break;
//			    	}
//			}
//			if(flag){
//					cout<<b<<" ";
//		}
//		}
//}
//int main(){
//	int c,d;
//	cin>>c;
//	fun(c,d);
	
//}
#include<bits/stdc++.h>
using namespace std;
bool isprime(int a){
		for(int j=2;j<=sqrt(a);j++){
		   	if(a%j==0){
		    	return false;
			    }
			}
			return true;
}
int main(){
	int n,a;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a;
		if(isprime(a))
			cout<<a<<" ";
	}
	
}
