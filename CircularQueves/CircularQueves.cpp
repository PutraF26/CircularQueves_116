#include <iostream>
using namespace std;

class Queves {
	int FRONT, REAR, max = 5;
	int queve_array[5];

public:
	Queves() {
		FRONT = -1;
		REAR = -1;
	}

	void insert() {
		int num;
		cout << "Enter a number: ";
		cin >> num;
		cout << endl;

		//Cek apakah antrian penuh
		if ((FRONT == 0 && REAR == max - 1) || (FRONT == REAR + 1)) {
			
	}