#include<iostream> 
#include<cstring>
using namespace std;
int main(){
	int n,i,j,op,temp;
	cin>>n;
	op=0;
	for(j=1;j<=n;j++){
		temp=1;
		for(i=1;i<=j;i++){
				temp=temp*i;
				
			}
		op=op+temp;
	}
	cout<<op<<endl;
}
