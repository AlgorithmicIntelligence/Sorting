#include "quicksort.h"

static void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

void quicksort(int* array, int* array_index, int index_size) {
    if(index_size > 1) {
        int pivot = array[array_index[index_size/2]];  //important for runtime, don't choice nums_index[0]
        swap(&array_index[0], &array_index[index_size/2]);
        int begin = 1;
        int end = index_size - 1;   
        while(begin <= end) {
            while(begin <= (index_size - 1) && array[array_index[begin]] <= pivot)
                begin++;
            while(0 <= end && array[array_index[end]] > pivot)
                end--;
            if(begin < end) {
                swap(&array_index[begin], &array_index[end]);
                end--;
                if(begin <= end)
                    begin++;
            }
        }
        if(end != 0)          
            swap(&array_index[0], &array_index[end]);              
        quicksort(array, array_index, end );
        quicksort(array, array_index + end + 1, (index_size - 1) - end );
    }  
}