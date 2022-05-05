#include <stdlib.h>
#include <stdio.h>
#include "Array_ADT.h"

void arr_init(array *farray, int array_size, int array_length, const int *arr) {
    farray->size = array_size;
    farray->length = array_length;
    farray->A = (int *)malloc(array_size* sizeof(int));
    int i = 0;
    for (; i < array_length; i++)
        farray->A[i] = arr[i];
}

void arr_disp(array *farray) {
    int i = 0;
    for (; i < farray->size; i++)
        printf("%d ", farray->A[i]);
    printf("\n");
}

void arr_append(array *farray, int element_v) {
    farray->A[farray->length] = element_v;
    farray->length++;
}

void arr_insert(array *farray, int index, int element_v) {
    if (index >= 0 && index <= farray->length) {
        int i = farray->length;
        for (; i > index; i--)
            farray->A[i] = farray->A[i - 1];
        farray->A[index] = element_v;
        farray->length++;
    }
}