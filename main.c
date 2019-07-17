/* 
 * Author: NengChien Wang
 *
 * Created on July 16, 2019, 3:20 PM
 */

#include <stdio.h> 
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "quicksort.h"
#include "mergesort.h"
#include "heapsort.h"

int main(void) 
{ 
    clock_t t_start, t_end;
    int array_size = 10;
    int* array = (int*) malloc(sizeof(int)*array_size);
    
    
    srand(time(NULL));
    for(int i=0; i<array_size; i++)
        *(array+i) = rand() % 100; 
    
    int* array_index = (int*) malloc(sizeof(int)*array_size);
    for(int i=0; i<array_size; i++)
        array_index[i] = i;
    
    t_start = clock();
    quicksort(array, array_index, array_size);
    t_end = clock();
    printf("quicksort\n");
    printf("array = \t\t");
    for(int i = 0; i<array_size; i++)
        printf("%d\t",*(array+i));
    printf("\n");
    printf("array_index = \t\t");
    for(int i = 0; i<array_size; i++)
        printf("%d\t",*(array_index+i));
    printf("\n");
    printf("array_quicksort = \t");
    for(int i = 0; i<array_size; i++)
        printf("%d\t",array[*(array_index+i)]);
    printf("\n");
    printf("time = %ld\n", t_end-t_start);
    
    int* array_mergesort = (int*) malloc(sizeof(int)*array_size);    
    for(int i=0; i<array_size; i++)
        *(array+i) = rand() % 100 ;     
    memcpy(array_mergesort, array, sizeof(int)*array_size);   
    
    t_start = clock();
    mergesort(array_mergesort, 0, array_size-1);   
    t_end = clock();  
    
    printf("mergesort\n");
    printf("array = \t\t");
    for(int i = 0; i<array_size; i++)
        printf("%d\t",*(array+i));
    printf("\n");
    printf("array_mergesort = \t");
    for(int i = 0; i<array_size; i++)
        printf("%d\t",*(array_mergesort+i));
    printf("\n");
    printf("time = %ld\n", t_end-t_start);    
    int* array_heapsort = (int*) malloc(sizeof(int)*array_size);  
    for(int i=0; i<array_size; i++)
        *(array+i) = rand() % 100 ;     
    memcpy(array_heapsort, array, sizeof(int)*array_size); 
    
    t_start = clock();
    heapsort(array_heapsort, array_size);  
    t_end = clock();
     
  
    
    printf("heapsort\n");
    printf("array = \t\t");
    for(int i = 0; i<array_size; i++)
        printf("%d\t",*(array+i));
    printf("\n");
    printf("array_heapsort = \t");
    for(int i = 0; i<array_size; i++)
        printf("%d\t",*(array_heapsort+i));
    printf("\n");
    printf("time = %ld\n", t_end-t_start);
    return 0; 
}  