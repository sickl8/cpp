#include <iostream>

using namespace std;

#define eo2(x) (((x + 127) << 23))
#define EXPONENT (0b11111111 << 23)
#define SIGN_BIT (~(1 << 31))
#define MANTISSA (SIGN_BIT ^ EXPONENT)
int main() {
	// for (int i = 0; i > -9; i--) {
	// 	int x = eo2(i);
	// 	float kima = *(float*)&x;
	// 	cout << kima << endl;
	// }
	// int i = MANTISSA;
	// float f = *(float*)&i;
	// cout << SIGN_BIT << endl;
	// cout << EXPONENT << endl;
	// cout << MANTISSA << endl;
	// cout << f << endl;
	for (float x = 2; x < 512; x *= 2)
		cout << (1 / x) <<  " x = " << x << endl;
	/*
	10000
	00001
	*/
}