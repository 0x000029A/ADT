#include <stdlib.h>
#include <stdio.h>
#include "Array_ADT.h"

int arr_init(array *farray, int array_size, int array_length, const int *arr) {
    if (array_length <= array_size && array_length > 0 && array_size > 0 && arr != NULL && farray != NULL) {
        farray->size = array_size;
        farray->length = array_length;
        farray->A = (int *) calloc(array_size, sizeof(int));
        int i = 0;
        for (; i < array_length; i++)
            farray->A[i] = arr[i];
        return 1;
    }
    else
        return -1;
}

void arr_disp(array *farray) {
    int i = 0;
    for (; i < farray->length; i++)
        printf("%d ", farray->A[i]);
    printf("\n");
}

int arr_append(array * farray, int element_v) {
    if (farray->length < farray->size) {
        farray->A[farray->length] = element_v;
        farray->length++;
        return 1;
    }
    else
        return -3;
}

int arr_insert(array *farray, int index, int element_v) {
    if (index >= 0 && index <= farray->length && farray->length < farray->size) {
        int i = farray->length;
        for (; i > index; i--)
            farray->A[i] = farray->A[i - 1];
        farray->A[index] = element_v;
        farray->length++;
        return 1;
    }
    else
        return -1;
}

int arr_delete(array *farray, int index) {
    if (index >= 0 && index < farray->length) {
        int i = index;
        for (; i < farray->length; i++)
            farray->A[i] = farray->A[i + 1];
        farray->length--;
        return 1;
    }
    else
        return -1;
}

int arr_lsearch(array *farray, int key) {
    int i = 0;
    for (; i < farray->length; i++) {
        if (farray->A[i] == key)
            return i;
    }
    return -2;
}

int arr_bsearch(array *farray, int key) {
    int l = 0, h = farray->length - 1, mid;
    while(l <= h) {
        mid = (l + h) / 2;
        if (key == farray->A[mid])
            return mid;
        else if (key < farray->A[mid])
            h = mid - 1;
        else
            l = mid + 1;
    }
    return -2;
}

void arr_set(array *farray, int index, int element_v) {
    if (index <= farray->length)
        farray->A[index] = element_v;
}

int arr_get(array *farray, int index) {
    if (index <= farray->length)
        return farray->A[index];
    return -1;
}

int arr_sum(array *farray) {
    int i = 0, sum = 0;
    for (; i < farray->length; i++)
        sum += farray->A[i];
    return sum;
}

int arr_avg(array *farray) {
    int i = 0, avg = 0;
    for (; i < farray->length; i++)
        avg += farray->A[i];
    return avg / farray->length;
}

int arr_max(array *farray) {
    int i = 1, max = farray->A[0];
    for (; i < farray->length - 1; i++) {
        if (farray->A[i + 1] > max)
            max = farray->A[i + 1];
    }
    return max;
}

int arr_min(array *farray) {
    int i = 1, max = farray->A[0];
    for (; i < farray->length - 1; i++) {
        if (farray->A[i + 1] < max)
            max = farray->A[i + 1];
    }
    return max;
}


