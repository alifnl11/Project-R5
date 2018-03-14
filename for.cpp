#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, x, sum = 0;
	cin >> n;
	for(; n--;) {
		cin >> x;
		sum += x;
	}
	cout << sum << endl;
	return 0;
}
