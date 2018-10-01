#include <iostream>
#include <math.h>

using namespace std;

bool is_preNum(int Num) {
	for (int i = 2; i <= sqrt(Num); i++){
		if (Num%i == 0){
			return false;
		}
	}
	return true;
}

int main()
{
	int N;

	cout<< "Please Input a int Num(>2):" << endl;
	cin >> N;
	if (N <= 2) {
		cout << "Error Num" << endl;
		return 0;
	}
	for (int i = N - 1; i >=2; i--) {
		if (is_preNum(i)) {
			cout << "The max prenum is :" << i << endl;
			break;
		}
	}
	system("pause");
	return 0;
}