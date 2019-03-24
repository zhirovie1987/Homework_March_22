#include <iostream>
#include <iomanip>
using namespace std;

int32_t Reverse (int32_t data, uint16_t &digits);

int main () {
	int32_t Number_To_Reverse(0);
	uint16_t Digits_Of_Number(0);
	int32_t Result(0);
	cin >> Number_To_Reverse;
	Result = Reverse (Number_To_Reverse, Digits_Of_Number);

	cout << setfill('0') << setw(Digits_Of_Number) << Result;
	return 0;
}

int32_t Reverse (int32_t data, uint16_t &digits) {
	int32_t temp(0);
	digits = 0;
	while (data) {
		temp = (temp * 10) + (data % 10);
		data /= 10;	
		++digits;
	}
	return temp;
	
}
