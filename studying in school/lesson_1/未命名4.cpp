#include<bits/stdc++.h>
using namespace std;
int main(){
	float x1, y1, x2, y2, x3, y3,z,x,c,p,s;
	cin>>x1>>y1>> x2>> y2>> x3>> y3;
	z=sqrt(pow((x1 - x2),2)+pow((y1 - y2),2));
	x=sqrt(pow((x2 - x3),2)+pow((y2 - y3),2));
	c=sqrt(pow((x3 - x1),2)+pow((y3 - y1),2));
	p = (z + x + c) / 2;
	s=sqrt( (p * ( p - z ) * ( p - x ) * ( p - c )) );
	printf("%.2f",c);
	return 0;
    //老师哪里错了？
}
