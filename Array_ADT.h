#ifndef ARRAY_ADT_H
#define ARRAY_ADT_H
/* To use the program:
 * 1- Create an array with the values you want
 * 2- Pass the array size and the array tp INIT function
 */
struct array {
    int *A;
    int size;
    int length;
} array;

int arr_init(int array_size, int *arr);
int arr_disp(struct array *array);

#endif