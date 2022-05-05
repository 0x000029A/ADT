#include "Array_ADT.h"

int main() {
    array array1;
    int arr_s = 10;
    int arr_l = 6;
    int arr_main[10] = {1,2,3,4,5, 6};
    arr_init(&array1, arr_s, arr_l, arr_main);
    arr_disp(&array1);
    return 0;
}