#include <stdlib.h>
#include <stdio.h>
#include "Array_ADT.h"

int arr_init(int array_size, int *arr) {
    array.size = array_size;
    array.A = (int *)malloc(array_size* sizeof(int));
    int i = 0;
    for (; i < array_size; i++)
        array.A[i] = arr[i];
    array.length = i;
}

int arr_disp(struct array *array) {
    int i = 0;
    for (; i < array->size; i++)
        printf("%d", array->A[i]);
}