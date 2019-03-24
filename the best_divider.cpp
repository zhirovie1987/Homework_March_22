#include <iostream>

using namespace std;

uint32_t Get_Digits_Summ (uint32_t data);

int main () {
	
  uint32_t Value(0);
  uint32_t Divider(1);
  uint32_t Current_Summ(0), Previous_Summ(0);
  uint32_t Best_Divider(0);
  
  cin >> Value;
  
  while (Divider <= Value) {
  	if (!(Value % Divider)) {
  		Current_Summ = Get_Digits_Summ (Divider);
  		cout << Divider << endl;
  		if (Current_Summ >= Previous_Summ) {
  			Best_Divider = Divider;
		}
		Previous_Summ = Current_Summ;
	  }
  	++Divider;
  }
  cout << "The best divider is " << Best_Divider;
  return 0;
}

uint32_t Get_Digits_Summ (uint32_t data) {
	
	uint32_t Summ = 0;
	
	while (data > 0) {
		Summ += data % 10;
		data /= 10;
	}
	return Summ;
}
