#include <iostream>

using namespace std;

#define eo2(x) (((x + 127) << 23))

int main() {
	for (int i = 0; i > -9; i--) {
		int x = eo2(i);
		float kima = *(float*)&x;
		cout << kima << endl;
	}
}