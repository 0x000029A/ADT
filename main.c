#include "Array_ADT.h"
#include <stdio.h>
// Program sample
int main() {
    array array1;
    int arr_main[5] = {1, 3, 5, 7, 9};
    arr_init(&array1, 10, 5, arr_main);
    arr_disp(&array1);
    return 0;
}