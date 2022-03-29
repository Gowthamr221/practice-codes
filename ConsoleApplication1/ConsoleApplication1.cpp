#include<iostream>

using namespace std;

double binaryExponentiation(double number, int power) {
	double ans = 1.0;
	long nn = power;
	if (nn < 0)nn = -1 * nn;
	while (nn > 0) {
		if (nn % 2 == 1) {
			ans = ans * number;
			nn = nn - 1;
		}
		else{
			number = number * number;
			nn = nn / 2;
		}
	}
	if (power < 0) ans = (double)(1.0) / (double)(ans);

	return ans;
}

int main() {
	double number,power;
	cin >> number>>power;
	int sol = binaryExponentiation(number, power);
	cout << sol << endl;
}