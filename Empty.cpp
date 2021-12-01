#include <iostream>
using namespace std;

void fill_array(int** const  array, const int row, const int col) {
	for (int i = 0; i < row; i++) {
		*array = new int[col];
		for (int j = 0; j < col; j++) {
			array[i][j] = rand();
		}
	}
}
int main()
{
	const int row = 5;
	const int col = 5;
	int** array = new int*[row];
	fill_array(array, row, col);
}

