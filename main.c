#include "Array_ADT.h"
#include <stdio.h>

void menu(void) {
    int flag = 0;
    printf("+---------------+\n"
           "| Welcome to Array ADT Menu |\n"
           "+---------------+\n"
           "| You are ready with one array,\n"
           "| To initialize it, please enter\n"
           "| the array size, array length,\n"
           "| and array elements, to proceed,\n"
           "| Enter 1 |\n"
           "+---------------+\n");
    scanf("%d", &flag);
    if (flag == 1) {
        array array1;
        int arr_size, arr_length;
        printf("Enter the array size: ");
        scanf("%d", &arr_size);
        printf("\n Enter the array length: ");
        scanf("%d", &arr_length);
        printf("\nEnter the array elements: ");
        int i = 0, arr1_main[arr_size];
        for (; i < arr_length; i++)
            scanf("%d", &arr1_main[i]);
        if (arr_init(&array1, arr_size, arr_length, arr1_main)) {
            int choice;
            printf("Your array was initialized successfully!\b"
                   "Options menu:\n"
                   "1 -> Display array\n2 -> Append an element\n"
                   "3 -> Insert an element\n4 -> Delete an element\n"
                   "5 -> Linear search for an element\n6 -> Binary Search for an element\n"
                   "7 -> Set an element at a given index\n8 -> Get an elment from a given index\n"
                   "9 -> Calculate the average\n10 -> Get the maximum element\n"
                   "11 -> Calculate the sum\n12 -> Get the minimum element\n"
                   "13 -> Reverse the array\n14 -> Check if array is sorted\n"
                   "15 -> Insert an element to a sorted array\n16 -> Merge two sorted arrays\b"
                   "17 -> Right rotate\n18 -> Left rotate\n"
                   "19 -> Right shift\n 20 -> Left shift\n");
            scanf("%d", &choice);
            switch (choice) {
                case 1:

                    break;
            }
        }
        else {
            printf("Your array was not initialized due to a problem!");
        }

    }
}

int main() {

    return 0;
}