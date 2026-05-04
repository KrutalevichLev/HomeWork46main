#include "logic.h"

int main() {
	int array[DEFAULT_SIZE];
	int size;

	cout << "Enter size of array: ";
	cin >> size;

	cout << "Enter numbers of array: ";
	for (int i = 0; i < size; i++)
	{
		cout << i + 1 << ") ";
		cin >> array[i];
	}


	cout << "Your missing number is:  " << find_no_number(array,size);

	return 0;
}