#include <iostream>

using namespace std;

int main () {
	
	int32_t Odd_Numbers_Summ(0);
	auto Numbers_Quantity(50);
	auto Input_Buff(-90);
	
	cout << "Enter quantity of numbers: ";
	cin >> Numbers_Quantity;
	
	if (Numbers_Quantity >= 1 && Numbers_Quantity <= 50) {
		for (auto i = Numbers_Quantity; i > 0 ; --i) {
			cin >> Input_Buff;
			if ((Input_Buff >= -60) && (Input_Buff <= 90)) {
				if (Input_Buff & 0x1) {
					Odd_Numbers_Summ += Input_Buff;
				}
			}
			else {
				++i;
				cout << "Out of range, try again" << endl;	
			}
		}
		cout << "Odd numbers summ = " << Odd_Numbers_Summ;
	}
	
	return 0;
}
