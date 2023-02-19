#include<iostream>
#include<cstring>
using namespace std;
float fun(float a, float b, float c) {
	if (a < b) {
		if (c > b) {
			return c;
		}
		if (c < b) {
			return b;
		}
	}
	if (a > b) {
		if (c > a) {
			return c;
		}
		if (c < a) {
			return a;
		}
	}
}
int main() {
	int o, p, q, tmp;
	float op;
	cin >> o >> p >> q;
	tmp = fun(o + p, o, p) * fun(o, p, p + q);
	op = fun(o, p, q) / tmp;
	cout << op;
