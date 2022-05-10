#include "Array_ADT.h"
#include <stdio.h>
int main() {
    array array1;
    array array2;
    array array3;

    int arr1_main[4] = {1, 3, 5, 7};
    int arr2_main[4] = {2, 4, 6, 8};
    int arr3_main[8] = {0};

    arr_init(&array1, 4, 4, arr1_main);
    arr_init(&array2, 4, 4, arr2_main);
    arr_init(&array3, 8, 0, arr3_main);

    arr_disp(&array1);
    arr_disp(&array2);
    arr_disp(&array3);

    arr_smerge(&array1, &array2, &array3);

    arr_disp(&array3);
    return 0;
}