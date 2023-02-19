#include<bits/stdc++.h>
using namespace std;
int main(){ 
    int i,n,m=0;
    cin>>n;
    for(i=0;i<=n;i++){
    	if(i%7==0){
    		continue; 
		}
		else if(i%10==7){
			continue;
		}
		else if(i/10%10==7){
			continue;
		}
		else if(i/100==7){
			continue;
		}
		m=m+i;
    }
    cout<<m*m<<endl;
	return 0;
}
