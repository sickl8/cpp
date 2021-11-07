#include <iostream>

using namespace std;

int main () {
	std::string s[100];

	cout << "|" << s[0] << "|" << endl;
	if (s[0] == "")
		cout << "|" << s[0] << "|" << endl;
}