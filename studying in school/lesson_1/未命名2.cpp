#include<iostream>
using namespace std;
int main(){
	int a,b,c;
	float tmp_1,tmp_2,tmp_3,tmp_4,tmp_5;
	cin >>a>>b;
	tmp_5 = 1.9;
	tmp_2 = b;
	tmp_3 = tmp_2/10;
	tmp_1 = a;
	tmp_4 = tmp_1 + tmp_3;
	c = tmp_4/tmp_5;
	//tmp_2=inp%100
	//out_t=tmp/10
	cout<<c<<endl;
	return 0;
}
