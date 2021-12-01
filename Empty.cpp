#include <iostream>
#include <ctime> 
#include <map>
using namespace std;


int main()
{
	//setlocale(LC_ALL, "ru");	
	//srand(time(0));

	const int ROW = 5, COLUMN = 10;
	int** matrix = new int*[ROW];
	map<int, int> m;
	int counter = 0;

	for (int i = 0; i < ROW; i++) {
		matrix[i] = new int[ROW];
		int isZero = false;
		for (int j = 0; j < COLUMN; j++) {
			int value = rand() % 100;
			matrix[i][j] = value;
			if (value == 0) isZero = true;
			++m[value];
		}
		if (!isZero) counter++;
	}
	int max = -1;
	for (auto value : m) {
		if (value.first > max && value.second >= 2 ) {
			max = value.first;
		}
	}
	cout << "Число столбцов не содержащих элемента 0 : " << counter << endl;
	if (max != -1) {
		cout << "Максимальное число встретившееся более двух раз : " << max;
	}
	else {
		cout << "Такого числа нет";
	}
}

