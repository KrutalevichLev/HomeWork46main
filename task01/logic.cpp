#include "logic.h"

long long find_arifmetic_progress_sum(long long limit, int d) {

	long long number = (limit - 1) / d;

	long long sum = number * (d + d * number) / 2;

	return sum;
}

long long find_arifmetic_progress_sum_5_3(int limit) {
	long long sum = find_arifmetic_progress_sum(limit, 3) 
		+ find_arifmetic_progress_sum(limit, 5) 
		- find_arifmetic_progress_sum(limit, 15);

	return sum;
}