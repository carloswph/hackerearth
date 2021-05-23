#include <iostream>
#include<string>
/*
 * 75% accuracy - cannot find why it is not accepting three of the cases.
 * Preferred to not involve arrays or any other data structure.
 */

using namespace std;

int main() {
	int n, a, x;
	cin >> n >> a >> x;				
	int b = n - a;

	if (x >= a * b) {
		cout << -1 << endl;
	}
	else if (a > n || b < 0){
		cout << -1 << endl;
	}
	else {
		int div = x / b;
		int mod = x % b;
		std::string res = "";

		for(int i= 0; i < (n - div - b - 1); i++) {
			res += "0 ";
		}

		for(int i= 0; i < mod; i++) {
			res += "1 ";
		}

		res += "0 ";

		for(int i= 0; i < (b - mod); i++) {
			res += "1 ";
		}

		for(int i= 0; i < div; i++) {
			res += "0 ";
		}

		cout << res << endl;
	}
}