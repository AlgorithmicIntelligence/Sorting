#include "mergesort.h"

void merge(int* array, int left, int mid, int right) {
    int array_size = right-left+1;
    int* temp_array = (int*) malloc(sizeof(int) * array_size);
    int first_index = left;
    int second_index = mid+1;
    for(int i=0; i<array_size; i++) {
        if(first_index <= mid && second_index <= right)
            temp_array[i] = (array[first_index] < array[second_index]) ? array[first_index++] : array[second_index++];
        else if(first_index <= mid)
            temp_array[i] = array[first_index++];
        else // else if(second_index <= right)
            temp_array[i] = array[second_index++];
    }
    memcpy(array+left, temp_array, sizeof(int)*array_size);
}

void mergesort(int* array, int left, int right) {
    if (left < right) {
        int mid = (left + right) / 2;
        mergesort(array, left, mid);
        mergesort(array, mid+1, right);
        
        merge(array, left, mid, right);
    }
}