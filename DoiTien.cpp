#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
	int t;
	int a[10] = {1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
	do {
		cout << "Nhap so luong bo test T (T <= 50): ";
		cin >> t;
	} while (t <= 0 || t > 50);
	
	
	while (t--) {
		int n, res = 0;
		do {
			cout << "Nhap so nguyen N (1 <= N <= 100000): ";
			cin >> n;
		} while (n < 1 || n > 100000);
		
		for (int i = 0; i < 10; i++) {
			res += n/a[i];
			n %= a[i];
		}
		cout << "So to tien doi duoc = " << res << endl;
	}
	return 0; 
}
