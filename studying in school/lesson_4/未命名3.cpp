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
int MinOfTwo(int a,int b){
	if(a<b){
		return a;
	}
	if (a>b){
		return b;
	}
}
int main(){
	int a,b,c,x,y,z;
	cin>>x>>y>>z;
	a=MaxOfTwo(MaxOfTwo(x,y),MaxOfTwo(y,z));
	b=MinOfTwo(MinOfTwo(x,y),MinOfTwo(y,z));
	c=MaxOfTwo(MinOfTwo(x,y),MinOfTwo(y,z));
	if((a*a)+(b*b)==(c*c)){
		cout<<"Right triangle"<<endl;
	}
	if((a*a)+(b*b)<(c*c)){
		cout<<"Acute triangle"<<endl;
	}
	if((a*a)+(b*b)>(c*c)){
		cout<<"Obtuse triangle"<<endl;
	}
	if(((a==b)&&(a!=c))||((a==c)&&(a!=b))||((b==c)&&(a!=b))){
		cout<<"Isosceles triangle"<<endl;
	}
	if((a==b)&&(b==c)){
		cout<<"Equilateral triangle"<<endl;
	}
}
