#include <iostream>
#include <cmath>

using namespace std;

bool Is_Divisible_By_3 (uint16_t data);

uint32_t Get_Digits_Summ (uint32_t data);

int main () {
	const uint16_t MAX = 20;
	uint16_t Array[MAX];
	uint32_t Summ = 0;
	uint16_t Number_Quantity = 0;

	cin >> Number_Quantity;
	
	if ( Number_Quantity <= MAX) {
			for (auto i = 0; i < Number_Quantity; ++i) {
			cin >> Array[i];
			Summ += Array[i];
		}
		
		if (Is_Divisible_By_3 (Get_Digits_Summ (Summ))) {
			Summ = 0;
			for (auto i = 0; i < Number_Quantity; ++i) {
			Summ += Array[i] * pow (10, i);
			}
			cout << "Yes "<< Summ;;
		}
		
		else {
			cout << "No";
		}	
	
		
	} 
	else {
		cout << "Out of range";
	}
	

	return 0;
}

bool Is_Divisible_By_3 (uint16_t data) {
	if (!(data % 3)) {
		return true;
	}
	return false;
}

uint32_t Get_Digits_Summ (uint32_t data) {
	
	uint32_t Summ = 0;
	
	while (data > 0) {
		Summ += data % 10;
		data /= 10;
	}
	return Summ;
}
