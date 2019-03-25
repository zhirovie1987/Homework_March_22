#include <iostream>

using namespace std;

const auto MAGIC_NUMBER = 999999;
const auto DIGITS_NUMBER = 6;

bool Is_Lucky_Number (uint32_t data);

int main () {
	
	uint32_t Value = 0;
	
	cin >> Value;
	
	if (!(Value > MAGIC_NUMBER)) {
		if (Is_Lucky_Number (Value)) {
			cout << "Is lucky! Grab some beer to selebrate!";
		}
		else {
			cout << "Isn't lucky. Oh.. What a shitty day.. So, grab some beer to console yourself :-)";
		}
	}
	else {
		cout << "Ticket number should be 6's digits.";
	}
	return 0;
}

bool Is_Lucky_Number (uint32_t data) {
	
	uint16_t L_Nibble_Summ = 0, H_Nibble_Summ = 0;
	
	for (auto i = DIGITS_NUMBER; i > 0; --i) {
		if (i > DIGITS_NUMBER / 2) {
			H_Nibble_Summ += data % 10;
		}
		else {
			L_Nibble_Summ += data % 10;
		}
		data /= 10;
	}
	/*
	if (H_Nibble_Summ == L_Nibble_Summ) {
		return true;
	}
	return false;
	*/
	return (H_Nibble_Summ == L_Nibble_Summ);
}
