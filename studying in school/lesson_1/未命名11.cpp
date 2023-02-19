#include<iostream> 
#include<cstring>
using namespace std;
int main(){
	char a[100];
	gets(a);
	int len=strlen(a);
	for(int i=0;i<len;i++){
		if(int(a[i])>96)	a[i]=a[i]-32;
	}
	for(int i=0;i<len;i++){
		cout<<a[i];	
	}
}
