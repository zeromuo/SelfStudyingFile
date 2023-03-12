#include<bits/stdc++.h>
using namespace std;
int fun(int x){
	int i=1;
	if(i==x){
		return 1;
	}
	return x*fun(x-1);
}
int main(){
	int a;
	cin>>a;
	cout<<fun(a);
}
//#include<bits/stdc++.h>
//using namespace std;
//int main(){ 
//    int a,n,tmp,i;
//    a=1;
//    cin>>n;
//    for(i=1;i<=n;i++){
//    	a=a*i;
//	}
//	cout<<a<<endl;
//	return 0;
//}
