#include "logic.h"

int find_no_number(int array[], int size) {
    if (size <= 0) return 0;

    long long actual_sum = 0;
    int n = 0;

   
    for (int i = 0; i < size; i++) {
        actual_sum += array[i];
        if (array[i] > n) {
            n = array[i];
        }
    }

   
    long long expected_sum = n * (n + 1) / 2;

    
    int missing = expected_sum - actual_sum;

    return missing > 0 ? missing : 0;
}