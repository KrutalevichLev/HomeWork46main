#include "logic.h"

int main() {
	int limit;

	cout << "Enter limit of arifmetic progress: ";
	cin >> limit;

	long long result = find_arifmetic_progress_sum_5_3(limit);

	cout << "Your sum is " << result;

	return 0;
}