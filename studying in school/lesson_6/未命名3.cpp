#include<bits/stdc++.h>
using namespace std;

int main(){
	float n,x,tmp,op;
	cin>>x>>n;
	tmp=x+1;
	for(int i=;i<n;i++){
		op=x/tmp;
		tmp=op;
	}
	printf("%.2f",op);
}
