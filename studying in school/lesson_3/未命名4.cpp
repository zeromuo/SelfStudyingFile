#include<bits/stdc++.h>
using namespace std;
float dis(float a,float b,float c,float d){
	float dist;
	dist=sqrt((b-a)*(b-a)+(d-c)*(d-c));
	return dist;
}
int main(){
	float x1,x2,x3,y1,y2,y3,dis1,dis2,dis3,ans;
	cin>>x1;
	cin>>y1;
	cin>>x2;
	cin>>y2;
	cin>>x3;
	cin>>y3;
	dis1=dis(x1,x2,y1,y2);
	dis2=dis(x2,x3,y2,y3);
	dis3=dis(x1,x3,y1,y3);
	ans=dis1+dis2+dis3;
	printf("%.2f",ans);
	
}
