#include<iostream>
#include<cstring>
using namespace std;
long long fun(int j) {
	int i;
	long long temp = 1;
	for (i = 1; i <= j; i++) {
		temp = temp * i;
	}
	return temp;

}
int main() {
	int n, j;
	long long op = 0;
	cin >> n;
	for (j = 1; j <= n; j++) {
		op = op + fun(j);
	}
	cout << op;
}
