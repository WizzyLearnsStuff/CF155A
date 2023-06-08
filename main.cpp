#include<iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	int max, min;
	cin >> max;
	min = max;
	int a = 0;
	for(int i = 1; i < n; i++) {
		int k;
		cin >> k;
		if (max < k) {
			a++;
			max = k;
		}

		if (min > k) {
			a++;
			min = k;
		}
	}
	cout << a;
}
