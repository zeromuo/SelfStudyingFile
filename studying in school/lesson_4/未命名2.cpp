#include<bits/stdc++.h>
using namespace std;
int MaxOfTwo(int a,int b){
	if(a>b){
		return a;
	}
	if (a<b){
		return b;
	}
}
int main(){
	int n;
	cin>>n;
	int a[n]={};
	int o[n]={};
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int num,s;
	num=0;
	s=0;
	for(int i=1;i<n;i++){
		int tmp1,tmp2;
		tmp1=a[i-1];
		tmp2=a[i];
		if(tmp1+1==tmp2){
			num++;
		}
		else{
			o[s]=num;
			s++;
			num=0;
		}
	}
	int op;
	op=1;
	for(int i=1;i<s;i++){
		int tmp1,tmp2;
		tmp1=o[i-1];
		tmp2=o[i];
		if(MaxOfTwo(tmp1,tmp2)>op){
			op=MaxOfTwo(tmp1,tmp2);
		}
	}
	op++;
	cout<<op<<endl;
}
