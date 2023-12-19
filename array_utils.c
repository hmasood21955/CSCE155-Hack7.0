#include "array_utils.h"
#include<stdlib.h>
int contains(const int *arr, int size, int x) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == x) {
            return 1;  
        }
    }
    return 0;  
}

int containsWithin(const int *arr, int size, int x, int i, int j) {
    for (int k = i; k <= j; ++k) {
        if (k >= 0 && k < size && arr[k] == x) {
            return 1;  
        }
    }
    return 0; 
}

//place your function definitions here
