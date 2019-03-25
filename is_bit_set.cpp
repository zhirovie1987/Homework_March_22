#include <iostream>

using namespace std;

int main () {
	uint32_t Value = 0;
	auto Bit_Number = 32;
	
	cout << "Put value: ";
	cin >> Value;
	cout << "Put bit number: ";
	cin >> Bit_Number;
	
	if ((Value > 0) && (Value <= 32) && (Value & (0x1 << Bit_Number - 1))) {
		cout << "Yes";
	}
	else {
		cout << "No";
	}
	
	return 0;
}
