#include<iostream> 
#include<cstring>
using namespace std;
int main(){
	int a,b,c;
	cin>>a>>b>>c;
	if(a<b){
	        if(c>b){
				cout<<c<<endl;	
			}
			if(c<b){
				cout<<b<<endl;	
			}
	    }
	if(a>b){
	        if(c>a){
			cout<<c<<endl;	
			}
			if(c<a){
			cout<<a<<endl;	
			}
		    }
}
