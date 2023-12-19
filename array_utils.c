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
int *paddedCopy(const int *arr, int oldSize, int newSize) {
    int *newArr = (int *)malloc(sizeof(int) * newSize);
    if (!newArr) {
        
        return NULL;
    }

    int minSize = (oldSize < newSize) ? oldSize : newSize;

    for (int i = 0; i < minSize; ++i) {
        newArr[i] = arr[i];
    }

    for (int i = minSize; i < newSize; ++i) {
        newArr[i] = 0;  
    }

    return newArr;
}
