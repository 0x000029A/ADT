#ifndef ARRAY_ADT_H
#define ARRAY_ADT_H
/* To use the program:
 * 1- Create an array with the values you want
 * 2- Pass the array size and the array tp INIT function
 */
typedef struct array {
    int *A;
    int size;
    int length;
} array;

void arr_init(array *farray, int array_size, int array_length, const int *arr);
void arr_disp(array *farray);
void arr_append(array *farray, int element_v);
void arr_insert(array *farray, int index, int element_v);

#endif