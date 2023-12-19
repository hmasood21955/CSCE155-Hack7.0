#ifndef ARRAY_UTILS_H
#define ARRAY_UTILS_H

int contains(const int *arr, int size, int x);
int containsWithin(const int *arr, int size, int x, int i, int j);
int *paddedCopy(const int *arr, int oldSize, int newSize);
void reverse(int *arr, int size);

//place your documentation and prototypes here
